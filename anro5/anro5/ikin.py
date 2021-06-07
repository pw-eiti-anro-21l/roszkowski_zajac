import rclpy
from rclpy.node import Node 
from ament_index_python.packages import get_package_share_directory
from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import JointState
from math import cos, sin, atan, atan2, sqrt, acos, asin, pi
from rclpy.qos import QoSProfile
import json

def get_params(part, filename):
    path = get_package_share_directory('anro5') + "/" + filename
    with open(path, "r") as file:
        read_file = json.load(file)
    part_params = read_file[part]
    return part_params

class Ikin(Node):

    def __init__(self):
        super().__init__('ikin')
        qos_profile = QoSProfile(depth=10)
        self.pose_sub = self.create_subscription(PoseStamped, '/ikin_pose', self.listener_callback, qos_profile)
        self.joint_pub = self.create_publisher(JointState, '/joint_interpolate', qos_profile)
        self.base_height = float(get_params('base', 'params_server.json')['length'])+1
        self.length_1_2 = float(get_params('link_2', 'params_server.json')['length'])
        self.length_2_tool = float(get_params('link_3', 'params_server.json')['length']) + float(get_params('tool', 'params_server.json')['length'])

    def listener_callback(self, msg):
        self.find_joint_states(msg)

    def find_joint_states(self, pose):
        joint_states = JointState()
        joint_states.name = ['base_to_link1', 'link1_to_link2', 'link2_to_link3']
        x = pose.pose.position.x
        y = pose.pose.position.y
        z = pose.pose.position.z - self.base_height
        a = self.length_1_2
        d = self.length_2_tool
        dist = sqrt(x*x + y*y + z*z)

        self.get_logger().info("x: "+ str(x))
        self.get_logger().info("y: "+ str(y))
        self.get_logger().info("z: "+ str(z))
        self.get_logger().info("a: "+ str(a))
        self.get_logger().info("d: "+ str(d))
        self.get_logger().info("dist: "+ str(dist))
        self.get_logger().info("oblicz: "+ str(((a*a + d*d - dist*dist)/(2*a*d))))


        # if (dist<1.1):      
        if (((a*a + d*d - dist*dist)/(2*a*d)) >= -1) and (((a*a + d*d - dist*dist)/(2*a*d)) <= 1): #ograniczenei bo inaczej wywala sie
            gamma = acos((a*a + d*d - dist*dist)/(2*a*d))
        else: 
            gamma = pi
            
        joint_2_3 = pi - gamma
        alpha = asin(d*sin(gamma)/dist)
        joint_1_2 = (alpha + atan2(z,sqrt(x*x + y*y)))
        joint_0_1 = atan2(y,x)

        joint_states.position = [float(joint_0_1), float(joint_1_2), float(joint_2_3)]
        self.joint_pub.publish(joint_states)



def main(args=None):
    rclpy.init(args=args)
    ikin = Ikin()
    rclpy.spin(ikin)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
