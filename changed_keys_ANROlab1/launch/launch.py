import launch
import launch actions
import launch.suvstitutions

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
	return LaunchDescription([
	Node(
		package='turtlesim',
		executable='turtlesim_node'
		),
	Node(
		package='changed_keys_ANROlab1',
		executable='publish_twist_message',
		name='changed_keys',
		prefix=["gnome-terminal ", "-- "],
		output='screen',
		parameters=[
			{'do_przodu': 'u'},
			{'do_tylu': 'n'},
			{'w_lewo': 'h'},
			{'w_prawo': 'j'}
			]
		)
	])
			
