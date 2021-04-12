import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Twist

import curses
from curses import textpad

import time
from time import sleep


input_window = curses.initscr()


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.publish_twist_message)

        self.declare_parameter('up', 'u')
        self.declare_parameter('down', 'n')
        self.declare_parameter('left', 'h')
        self.declare_parameter('right', 'j')
	
        print("Move around by using these keys: \n U- go forward, \n N- go backward,\n J- go left,\n K- go right\n")

    def publish_twist_message(self):
      
        self.up = self.get_parameter('up').get_parameter_value().string_value
        self.down = self.get_parameter('down').get_parameter_value().string_value
        self.left = self.get_parameter('left').get_parameter_value().string_value
        self.right = self.get_parameter('right').get_parameter_value().string_value
        
        sleep(0.1)
    	
        curses.noecho()
        curses.cbreak()
        
        twist_message = Twist()

#        self.get_logger().info('in publish_twist_message')
        
        key = input_window.getkey()
        
        if(self.up == key):
            twist_message.linear.x = 2.0
            twist_message.angular.z = 0.0
        elif(self.down == key):
            twist_message.linear.x = -2.0
            twist_message.angular.z = 0.0
        elif(self.left == key):
            twist_message.angular.z = 2.0
            twist_message.linear.x = 0.0
        elif(self.right == key):
            twist_message.angular.z = -2.0
            twist_message.linear.x = 0.0
            
        else:
            twist_message.linear.x = 0.0
            twist_message.angular.z = 0.0

        
        self.publisher_.publish(twist_message)
        
        
        curses.nocbreak()
        input_window.keypad(0)
        curses.echo()
        curses.endwin()

    
def main(args=None):

    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)	
   
    minimal_publisher.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
