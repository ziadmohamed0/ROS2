from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    urdf_path = '/home/ziad/Ziad_WS/ROS2/work_space/install/ros2_urdf/share/ros2_urdf/urdf/three_wheeled_robot.urdf'

    return LaunchDescription([

        # Ignition Gazebo
        Node(
            package='ros_ign_gazebo',
            executable='create',
            arguments=['-file', urdf_path, '-world', 'empty.sdf'],
            output='screen'
        ),

        # Teleop
        Node(
            package='teleop_twist_keyboard',
            executable='teleop_twist_keyboard',
            name='teleop_twist_keyboard',
            output='screen'
        ),

        # RViz
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
        ),
    ])
