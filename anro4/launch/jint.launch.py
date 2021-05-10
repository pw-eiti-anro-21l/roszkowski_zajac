import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node

def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

    urdf_file_name = 'robot_arm_move.urdf.xacro.xml'
    rviz_file_name = 'robot_arm.rviz'
    urdf = os.path.join(
        get_package_share_directory('anro4'),
        urdf_file_name)
    rviz = os.path.join(
        get_package_share_directory('anro4'),
        rviz_file_name)


    with open(urdf, 'r') as infp:
        robot_desc = infp.read()

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        Node(
            package='anro4',
            executable='interpolation_service',
            name='interpolation_service',
            parameters=[{'use_sim_time': use_sim_time,
            }],
            output='screen'),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time,
                'robot_description': Command(['xacro', ' ', urdf])
            }]),
        Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            name='joint_state_publisher',
            parameters=[{'source_list': ['joint_interpolate']}],

    )])
