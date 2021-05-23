import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import JointState
from math import cos, sin, atan, atan2, sqrt
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

        base_to_joint1_trans = pose_z - self.link1_length - self.base_length
        link1_to_link2_trans = -self.link2_length - pose_y
        link2_to_link3_trans = pose_x - self.link3_length - self.tool_length

        if base_to_joint1_trans > 0 or base_to_joint1_trans < -1*self.link1_length:
            self.get_logger().info("base_to_link1 cannot move further")

        elif link1_to_link2_trans > 0 or link1_to_link2_trans < -1*self.link2_length:
            self.get_logger().info("link1_to_link2 cannot move further")

        elif link1_to_link2_trans > 0 or link1_to_link2_trans < -1*self.link3_length:
            self.get_logger().info("link2_to_link3 cannot move further")
        else:
            joint_states.position = [float(base_to_joint1_trans), float(link1_to_link2_trans), float(link2_to_link3_trans)]
            self.joint_publisher.publish(joint_states)


        self.get_logger().info(str(pose_x))
        self.get_logger().info(str(pose_y))
        self.get_logger().info(str(pose_z))
        self.get_logger().info(str(link1_to_link2_trans))

    # def get_length(self):
    #     path = get_package_share_directory('anro5') + "/dh_params.json"
    #     with open(path, "r") as read_file:
    #         data = json.load(read_file)
    #     return data


def main(args=None):
    rclpy.init(args=args)
    inv_kin_subscriber = IKIN()
    rclpy.spin(inv_kin_subscriber)
    rclpy.shutdown()


if __name__ == '__main__':
    main()