import launch
import launch.actions
import launch.substitutions

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
	return LaunchDescription([
	
	Node(
		package='changed_keys_ANROlab1',
		executable='talker',
		name='publish_twist_message',
		prefix=["gnome-terminal ", "-- "],
		output='screen',
		parameters=[
			{'do_przodu': 'u'},
			{'do_tylu': 'n'},
			{'w_lewo': 'h'},
			{'w_prawo': 'j'}
			]
		),
	Node(
		package='turtlesim',
		executable='turtlesim_node'
		)
	])
			
