from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    pkg_share = get_package_share_directory('ros2_urdf')
    urdf_file = os.path.join(pkg_share, 'urdf', 'cylinder.urdf')

    return LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            arguments=[urdf_file]
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2'
        )
    ])
