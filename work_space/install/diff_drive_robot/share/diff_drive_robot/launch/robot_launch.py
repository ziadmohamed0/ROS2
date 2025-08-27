from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': open('/home/ziad/Ziad_WS/ROS2/work_space/src/diff_drive_robot/urdf/diff_drive.urdf.xacro').read()}]
        )
    ])
