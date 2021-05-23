import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import JointState
from math import cos, sin, atan, atan2, sqrt, acos, asin, pi
from rclpy.qos import QoSProfile 
import json
import transformations
import mathutils
from ament_index_python.packages import get_package_share_directory

class IKIN(Node):

    def __init__(self):
        super().__init__('ikin')
        qos_profile = QoSProfile(depth=10)
        self.pose_subscriber = self.create_subscription(PoseStamped, '/pose_ikin', self.listener_callback, qos_profile)
        self.joint_publisher = self.create_publisher(JointState, '/joint_interpolate', qos_profile)

        # to get_length() powinno dzialac ale na razie po prostu podam wartosci

        # self.link1_length = self.get_length()['row1']['link_len']
        # self.link2_length = self.get_length()['row1']['link_len']
        # self.link3_length = self.get_length()['row3']['link_len']
        self.link1_length = 1.0
        self.link2_length = 3.0
        self.link3_length = 2.0
        self.tool_length = 0.1
        self.base_length = 0.5

    def listener_callback(self, msg):
        self.solve_inverse_kinematics(msg)
        
    def solve_inverse_kinematics (self, pose):
        joint_states = JointState()
        joint_states.name = ['base_to_link1', 'link1_to_link2', 'link2_to_link3']
        
        pose_x = pose.pose.position.x
        pose_y = pose.pose.position.y
        pose_z = pose.pose.position.z
        
        difference = sqrt(pose_x**2 + pose_y**2 + pose_z**2)

        beta = acos((self.link2_length**2 + self.link3_length**2 - difference**2)/(2*self.link2_length*self.link3_length))
        joint_2_3 = pi - beta
        alpha = asin(self.link3_length*sin(beta)/difference)
        link1_to_link2 = -(alpha + atan2(pose_z, sqrt(pose_x**2 + pose_y**2)))
        base_to_link1 = atan2(pose_y, pose_x)

        # base_to_joint1_trans = pose_z - self.link1_length - self.base_length
        # link1_to_link2_trans = -self.link2_length - pose_y
        # link2_to_link3_trans = pose_x - self.link3_length - self.tool_length

        if (abs(base_to_link1)>3.14):
            self.get_logger().info("base_to_link1 cannot move further")

        elif (abs(link1_to_link2+0.935)>0.635):
            self.get_logger().info("link1_to_link2 cannot move further")

        elif (abs(link2_to_link3)>1.57):
            self.get_logger().info("link2_to_link3 cannot move further")
        else:
            joint_states.position = [float(base_to_link1), float(link1_to_link2), float(link2_to_link3)]
            self.joint_publisher.publish(joint_states)


        self.get_logger().info(str(pose_x))
        self.get_logger().info(str(pose_y))
        self.get_logger().info(str(pose_z))
        # self.get_logger().info(str(link1_to_link2_trans))

    # def get_length(self):

    #     with open(os.path.join(
    #         get_package_share_directory('anro5'),'urdf_wyniki.yaml'), 'r') as file:

    #         data = yaml.load(file, Loader=yaml.FullLoader)

    #     return data


def main(args=None):
    rclpy.init(args=args)
    inv_kin_subscriber = IKIN()
    rclpy.spin(inv_kin_subscriber)
    rclpy.shutdown()


if __name__ == '__main__':
    main()