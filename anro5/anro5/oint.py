import rclpy
from rclpy.node import Node
from anro5_interface.srv import PositionTool
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped
from math import floor, pi, sin, cos
from rclpy.qos import QoSProfile
from time import sleep
from visualization_msgs.msg import Marker
from visualization_msgs.msg import MarkerArray
import json
from ament_index_python.packages import get_package_share_directory
class OpInterpolationServer(Node):

    def __init__(self):
        super().__init__('op_interpolation_server')
        self.srv = self.create_service(PositionTool, 'op_interpolation', self.interpolation_callback)
        qos_profile = QoSProfile(depth=10)
        self.marker_publisher = self.create_publisher(MarkerArray, '/marker', qos_profile)
        self.pose_publisher = self.create_publisher(PoseStamped, '/pose_ikin', qos_profile)
        self.subsciber = self.create_subscription(JointState, 'joint_states', self.listener_callback, 10)
        self.joint_pub = self.create_publisher(JointState, 'joint_interpolate', qos_profile)

        # potem mozna bedzie zrobic ze bedzie te dlugosci zczytywac z urdf_wyniki.yaml
        self.tool_length = 0.1
        self.base_length = 0.5

        # to get_length() powinno dzialac ale na razie po prostu podam wartosci

        # self.link1_length = self.get_length()['row1']['link_len']
        # self.link2_length = self.get_length()['row1']['link_len']
        # self.link3_length = self.get_length()['row3']['link_len']
        self.link1_length = 1.0
        self.link2_length = 3.0
        self.link3_length = 2.0

        self.initial_position = [0.0, 0.0, 0.0]
        self.in_action = False
        self.initial_joint_states = [0.0, 0.0, 0.0]
        self.position_dict = {}
        self.x_array = []
        self.y_array = []
        self.z_array = []

    def listener_callback(self, msg):
        if not self.in_action:
            self.initial_joint_states[0] = msg.position[0]
            self.initial_joint_states[1] = msg.position[1]
            self.initial_joint_states[2] = msg.position[2]

    def interpolation_callback(self, request, response):
        self.in_action = True
        pose = PoseStamped()

        if request.a <= 0 or request.b <= 0:
            response.server_feedback = "Length 'a' and height 'b' cannot be 0 or negative"
            return response
        if request.method != "rectangle" and request.method != "ellipse":
            response.server_feedback = "Bad method. Choose 'rectangle' or 'ellipse'"
            return response
        if request.interpolation_time <= 0:
            response.server_feedback = "Interpolation time cannot be 0 or negative"
            return response

        if self.initial_joint_states != [0.0, 0.0, 0.0]:
            self.trapezoid_interpolation([0.0, 0.0, 0.0], 2)

        if request.method == "rectangle":
            was_completed = self.interpolate_rectangle(request)
        if request.method == "ellipse":
            was_completed = self.interpolate_ellipse(request)

        self.in_action = False
        if was_completed:
            response.server_feedback = "Interpolation completed"
        else:
            response.server_feedback = "Interpolation failed: unreachable points"

        # self.position_dict["x"] = self.x_array
        # self.position_dict["y"] = self.y_array
        # self.position_dict["z"] = self.z_array

        return response
    
    def interpolate_rectangle(self, request):
        pose = PoseStamped()
        a = request.a
        b = request.b
        # obwod
        perimeter = 2*(a + b)
        sample_time = 0.01
        steps_a = floor(request.interpolation_time/sample_time*(a/perimeter))
        steps_b = floor(request.interpolation_time/sample_time*(b/perimeter))

        marker = Marker()
        marker_array = MarkerArray()
        marker.scale.x = 0.04
        marker.scale.y = 0.04
        marker.scale.z = 0.04
        marker.color.a = 1.
        marker.color.r = 1.0
        marker.color.g = 1.0
        marker.color.b = 1.0
        marker.type = 2
        marker.action = 0
        marker.header.frame_id = "/base_link"

        # rysujemy prostokąt tylko w płaszczyznach y i z, x sie nie zmienia
        pose_x = self.initial_position[0]


        # 4 kroki bo prostokat
        for krok in [1,2,3,4]:
            initial_position = self.initial_position
            if krok == 1:
                y_goal = a
                z_goal = 0
                # w zaleznosci czy ruszamy sie po z czy po y bedzie inna liczba krokow
                steps = steps_a
            elif krok == 2:
                y_goal = 0
                z_goal = b
                steps = steps_b
            elif krok == 3:
                y_goal = -a
                z_goal = 0
                steps = steps_a
            elif krok == 4:
                y_goal = 0
                z_goal = -b
                steps = steps_b


            for step in range(steps + 1):
                # pose_x = initial_position[0] + (x_goal - initial_position[0])/steps*step
                pose_y = initial_position[1] + y_goal/steps*step
                pose_z = initial_position[2] + z_goal/steps*step
                
                pose.header.frame_id = "base_link"
                pose.pose.position.x = pose_x
                pose.pose.position.y = pose_y
                pose.pose.position.z = pose_z

                sleep(sample_time)
                self.pose_publisher.publish(pose)
                marker.pose.position.x = pose_x
                marker.pose.position.y = pose_y
                marker.pose.position.z = pose_z
                marker_array.markers.append(marker)
                
                id=0
                for marker in marker_array.markers:
                    marker.id = id
                    id += 1
                self.marker_publisher.publish(marker_array)

                # self.x_array.append(pose_x)
                # self.y_array.append(pose_y)
                # self.z_array.append(pose_z)

            self.initial_position = [pose_x, pose_y, pose_z]

        return True

    def interpolate_ellipse(self, request, tool_length):
        pose = PoseStamped()
        a = request.a/2
        b = request.b/2
        sample_time = 0.01
        steps = floor(request.interpolation_time/sample_time)
        initial_position = self.initial_position
        pose_x = initial_position[0]
        marker = Marker()
        marker_array = MarkerArray()
        marker.scale.x = 0.04
        marker.scale.y = 0.04
        marker.scale.z = 0.04
        marker.color.a = 1.
        marker.color.r = 1.0
        marker.color.g = 1.0
        marker.color.b = 1.0
        marker.type = 2
        marker.action = 0
        marker.header.frame_id = "/base_link"

        for step in range(steps + 1):
            pose_y = initial_position[1] + a*cos(2*pi*step/steps)
            pose_z = initial_position[2] + b*sin(2*pi*step/steps)

            pose.header.frame_id = "base_link"
            pose.pose.position.x = pose_x
            pose.pose.position.y = pose_y
            pose.pose.position.z = pose_z

            sleep(sample_time)
            self.pose_publisher.publish(pose)
            marker.pose.position.x = pose_x
            marker.pose.position.y = pose_y
            marker.pose.position.z = pose_z
            marker_array.markers.append(marker)
            id=0
            for marker in marker_array.markers:
                marker.id = id
                id += 1
            self.marker_publisher.publish(marker_array)

        self.initial_position = [pose_x , pose_y, pose_z]

        return True


    def trapezoid_interpolation(self, goal_joint_states, interpolation_time):
        sample_time = 0.01
        steps = floor(interpolation_time/sample_time)
        joint_states = JointState()
        joint_states.name = ['base_to_link1', 'link1_to_link2', 'link2_to_link3']
        start_joint_states = self.initial_joint_states
        max_vel_x = (goal_joint_states[0] - start_joint_states[0]) / (0.8*interpolation_time)
        max_vel_y = (goal_joint_states[1] - start_joint_states[1]) / (0.8*interpolation_time)
        max_vel_z = (goal_joint_states[2] - start_joint_states[2]) / (0.8*interpolation_time)
        last_vel_x = 0
        last_vel_y = 0
        last_vel_z = 0
        pose_x = start_joint_states[0]
        pose_y = start_joint_states[1]
        pose_z = start_joint_states[2]
        for step in range(steps + 1):
            if step < 0.2*steps:
                curr_vel_x = max_vel_x*step/(0.2*steps)
                curr_vel_y = max_vel_y*step/(0.2*steps)
                curr_vel_z = max_vel_z*step/(0.2*steps)
            elif step >= 0.2*steps and step <= 0.8*steps:
                curr_vel_x = max_vel_x
                curr_vel_y = max_vel_y
                curr_vel_z = max_vel_z
            elif step > 0.8 * steps:
                curr_vel_x = max_vel_x - max_vel_x * (step-0.8*steps)/(0.2*steps)
                curr_vel_y = max_vel_y - max_vel_y * (step-0.8*steps)/(0.2*steps)
                curr_vel_z = max_vel_z - max_vel_z * (step-0.8*steps)/(0.2*steps)

            pose_x = pose_x + (last_vel_x+curr_vel_x)*interpolation_time/steps
            pose_y = pose_y + (last_vel_y+curr_vel_y)*interpolation_time/steps
            pose_z = pose_z + (last_vel_z+curr_vel_z)*interpolation_time/steps
            joint_1_state = pose_x
            joint_2_state = pose_y
            joint_3_state = pose_z
            joint_states.position = [float(joint_1_state), float(joint_2_state), float(joint_3_state)]
            self.joint_pub.publish(joint_states)
            sleep(sample_time)
        self.initial_joint_states = [joint_1_state, joint_2_state, joint_3_state]
        self.initial_position = [0.5, -0.5, 1.5]
        pose_x = joint_1_state
        pose_y = joint_2_state
        pose_z = joint_3_state


    def get_length(self):

        with open(os.path.join(
            get_package_share_directory('anro5'),'urdf_wyniki.yaml'), 'r') as file:

            data = yaml.load(file, Loader=yaml.FullLoader)

        return data


        
# def readYAMLfile():


#     with open(os.path.join(
#         get_package_share_directory('anro3'),'urdf_wyniki.yaml'), 'r') as file:

#         data = yaml.load(file, Loader=yaml.FullLoader)

#     my_data=[]

#     joint1_RPY = data['row1']['joint_rpy']
#     joint1_Vector = data['row1']['joint_xyz']
#     joint2_RPY = data['row2']['joint_rpy']
#     joint2_Vector = data['row2']['joint_xyz']
#     joint3_RPY = data['row3']['joint_rpy']
#     joint3_Vector = data['row3']['joint_xyz']

#     my_data.extend((joint1_RPY,joint1_Vector,joint2_RPY,joint2_Vector,joint3_RPY,joint3_Vector))

#     values = []
#     for element in my_data:
#         new_element = element.split()
#         list_of_floats = [float(item) for item in new_element]
#         values.append(list_of_floats)


#     return values

def main(args=None):
    rclpy.init(args=args)

    op_interpolation_server = OpInterpolationServer()

    rclpy.spin(op_interpolation_server)

    rclpy.shutdown()


if __name__ == '__main__':
    main()