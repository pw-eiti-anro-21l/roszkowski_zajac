import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Twist

import curses
from curses import textpad
import time



input_window = curses.initscr()
direction = curses.KEY_RIGHT

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.publish_twist_message)
        #self.i = 0

    def publish_twist_message(self):
        twist_message = Twist()
        twist_message.linear.x = 1.0
        twist_message.linear.y = 0.0
        twist_message.linear.z = 0.0
        
        twist_message.angular.x = 0.0
        twist_message.angular.y = 0.0
        twist_message.angular.z = 1.0
        
        self.publisher_.publish(twist_message)
        
        #self.get_logger().info('Publishing: "%s"' % msg.data)
        #self.i += 1


def curses_behavior(input_window):
    #curses.noecho() # the user window will be processed by the python programme, but not printed
		     # out into the terminal
    #curses.cbreak() # not waiting for enter - just pressing d will get the turtle down
    sh, sw = input_window.getmaxyx()
    
    box = [[3,3], [sh-3, sw-3]]
    
    textpad.rectangle(input_window, box[0][0], box[0][1], box[1][0], box[1][1])
    
    input_window.addstr(10, 5, "Hello")
    input_window.refresh()
    
    input_window.getch()
    
    time.sleep(3)
    

    curses.endwin() # closes the app window
    
def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()
	
    curses.wrapper(curses_behavior)
    
    
    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()



if __name__ == '__main__':
    main()
