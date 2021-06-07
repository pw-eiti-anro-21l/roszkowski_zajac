from anro5_interface.srv import PositionTool
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import JointState
from visualization_msgs.msg import Marker, MarkerArray
from math import cos, sin, floor, pi
from rclpy.qos import QoSProfile
from time import sleep


class Oint(Node):

    def __init__(self):
        super().__init__('oint')
        self.srv = self.create_service(PositionTool, 'PositionTool', self.interpolation_callback)
        qos_profile = QoSProfile(depth=10)
        self.marker_pub = self.create_publisher(MarkerArray, '/marker', qos_profile)
        self.pose_pub = self.create_publisher(PoseStamped, '/ikin_pose', qos_profile)
        self.joint_sub = self.create_subscription(JointState, 'joint_states', self.listener_callback, 10)
        self.joint_pub = self.create_publisher(JointState, 'joint_interpolate', qos_profile)
        self.initial_position = [0., 2., 4.5]
        self.spawn_position = [0.,2., 4.5]
        self.initial_joints_states = [0., 0., 1.57]

    def listener_callback(self, msg):
        for i in range(3):
            self.initial_joints_states[i] = msg.position[i]

    def interpolation_callback(self, request, response):
        pose = PoseStamped()

        if request.interpolation_time > 0:

            if request.method == "rectangle":
                self.draw_rectangle(request)
                response.server_feedback = "Finished drawing rectangle."

            elif request.method == "ellipse":
                self.draw_ellipse(request)
                response.server_feedback == "Finished drawing ellipse."
            
            else:
                response.server_feedback == "This method does not exist."
        else:
            response.server_feedback = "Error! Wrong time value."

        return response

    def draw_rectangle(self, request):
        sample_time = 0.01
        steps = floor(request.interpolation_time/sample_time)

        pose = PoseStamped()
        a = request.a
        b = request.b
        perim = (a+b)*2
        a_steps = floor(request.interpolation_time/sample_time*(a/perim))
        b_steps = floor(request.interpolation_time/sample_time*(b/perim))
        pos_y = self.initial_position[1]


        marker = Marker()
        markers = MarkerArray()
        marker.type = 2
        marker.action = 0
        marker.scale.x = 0.05
        marker.scale.y = 0.05
        marker.scale.z = 0.05
        marker.color.a = 0.5
        marker.color.r = 1.0
        marker.color.g = 0.0
        marker.color.b = 1.0
        marker.header.frame_id = "/base_link"


        self.initial_position = [0, 2., 4.5]

        for step in range(1,int((steps+1)/2)):
            pos_x = self.spawn_position[1] -(self.spawn_position[1]-self.initial_position[1] + (a/2))*step/steps
            pos_z = self.spawn_position[2] -(self.spawn_position[2]-self.initial_position[1] + (b/2))*step/steps

            pose.header.frame_id = "base_link"
            pose.pose.position.x = pos_x
            pose.pose.position.y = pos_y
            pose.pose.position.z = pos_z
            sleep(sample_time/2)
            self.pose_pub.publish(pose)     

        for i in range(4):
            current_position = self.initial_position
            if i == 0:
                y = a
                z = 0
                steps = a_steps
            elif i == 1:
                y = 0
                z = b
                steps = b_steps
            elif i == 2:
                y = -a
                z = 0
                steps = a_steps
            elif i == 3:
                y = 0
                z = -b
                steps = b_steps                 
            for step in range(1, steps+1):  
                pos_y = current_position[1] + y/steps*step
                pos_z = current_position[2] + z/steps*step

                pose.header.frame_id = "base_link"
                pose.pose.position.x = pos_x
                pose.pose.position.y = pos_y
                pose.pose.position.z = pos_z

                sleep(sample_time)
                self.pose_pub.publish(pose)
                marker.pose.position.x = pos_x
                marker.pose.position.y = pos_y
                marker.pose.position.z = pos_z
                markers.markers.append(marker)
                id=0
                for marker in markers.markers:
                    marker.id = id
                    id += 1
                self.marker_pub.publish(markers)


            self.initial_position = [pos_x, pos_y, pos_z]


    def draw_ellipse(self, request):
        sample_time = 0.01
        steps = floor(request.interpolation_time/sample_time)
        pose = PoseStamped()
        current_position = self.initial_position
        a = request.a
        b = request.b
        steps = floor(request.interpolation_time/sample_time)
        pos_x = current_position[0]

        marker = Marker()
        markers = MarkerArray()
        marker.type = 2
        marker.action = 0
        marker.scale.x = 0.05
        marker.scale.y = 0.05
        marker.scale.z = 0.05
        marker.color.a = 0.5
        marker.color.r = 1.0
        marker.color.g = 0.0
        marker.color.b = 1.0
        marker.header.frame_id = "/base_link"

        self.initial_position = [0, 2,4.5]

        for step in range(steps):
            pos_y = self.initial_position[1]+a*step/steps
            pos_z = self.spawn_position[2] -(self.spawn_position[2]-self.initial_position[2])*step/steps
            pose.header.frame_id = "base_link"
            pose.pose.position.x = pos_x
            pose.pose.position.y = pos_y
            pose.pose.position.z = pos_z
            sleep(sample_time/2)
            self.pose_pub.publish(pose)
                            
        for step in range(1, steps+1):  
            current_position = self.initial_position
            pos_y = current_position[1] + a*cos(2*pi*step/steps)
            pos_z = current_position[2] + b*sin(2*pi*step/steps)

            pose.header.frame_id = "base_link"
            pose.pose.position.x = pos_x
            pose.pose.position.y = pos_y
            pose.pose.position.z = pos_z
            sleep(sample_time)
            self.pose_pub.publish(pose)
            marker.pose.position.x = pos_x
            marker.pose.position.y = pos_y
            marker.pose.position.z = pos_z
            markers.markers.append(marker)
            id=0
            for marker in markers.markers:
                marker.id = id
                id += 1
            self.marker_pub.publish(markers)

        self.initial_position = [pos_x, pos_y, pos_z]


def main(args=None):
    rclpy.init(args=args)

    oint = Oint()

    rclpy.spin(oint)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
