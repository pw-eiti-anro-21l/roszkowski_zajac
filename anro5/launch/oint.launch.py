import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node


def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    # urdf_file_name = 'axis.urdf.xacro.xml'
    urdf_file_name = 'robot_arm_move.urdf.xacro.xml'
    rviz_file_name = 'robot_arm.rviz'
    urdf = os.path.join(
        get_package_share_directory('anro5'),
        urdf_file_name)
    rviz = os.path.join(
        get_package_share_directory('anro5'),
        rviz_file_name)

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),

        Node(
            package='anro5',
            executable='pos_service',
            name='pos_service'),

        Node(
            package='anro5',
            executable='ikin',
            name='ikin'),
        ])