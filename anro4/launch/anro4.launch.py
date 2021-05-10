import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node

<<<<<<< HEAD

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    rviz_file_name = 'robot_arm.rviz'
    rviz = os.path.join(get_package_share_directory('anro4'), rviz_file_name)
=======
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
>>>>>>> master

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),

        Node(
<<<<<<< HEAD
=======
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher_robot',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time,
                'robot_description': Command(['xacro', ' ', urdf]),
            }]),
        Node(
>>>>>>> master
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
<<<<<<< HEAD
            parameters=[{
                'use_sim_time': use_sim_time,
            }],
            arguments=['-d', rviz],
        )
    ])
=======
            parameters=[{'use_sim_time': use_sim_time}],
            arguments=['-d', rviz]),
        Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            name='joint_state_publisher',
            parameters=[{'source_list': ['joint_interpolate']}],
    )])
>>>>>>> master
