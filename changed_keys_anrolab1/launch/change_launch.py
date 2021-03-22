import launch
import launch.actions
import launch.substitutions

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
	return LaunchDescription([
	
	Node(
		package='changed_keys_anrolab1',
		executable='talker',
		name='publish_twist_message',
		prefix=["gnome-terminal"," -- "],
		output='screen',
		parameters=[
			{'up': 'u'},
			{'down': 'n'},
			{'left': 'h'},
			{'right': 'j'}
			]
		),
	Node(
		package='turtlesim',
		executable='turtlesim_node'
		)
	])
			
