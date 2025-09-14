# launch/hand_control.launch.py
from launch import LaunchDescription
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder

def generate_launch_description():
    moveit_config = MoveItConfigsBuilder("panda", package_name="moveit_resources_panda_moveit_config").to_moveit_configs()
    
    return LaunchDescription([
        # MoveIt nodes
        Node(
            package="moveit_ros_move_group",
            executable="move_group",
            output="screen",
            parameters=[moveit_config.to_dict()],
        ),
        
        Node(
            package="rviz2",
            executable="rviz2",
            name="rviz2",
            output="log",
            arguments=["-d", str(moveit_config.package_path / "config" / "moveit.rviz")],
            parameters=[moveit_config.robot_description,
                       moveit_config.robot_description_semantic,
                       moveit_config.robot_description_kinematics],
        ),
        
        Node(
            package="robot_state_publisher",
            executable="robot_state_publisher",
            output="both",
            parameters=[moveit_config.robot_description],
        ),
        
        Node(
            package="joint_state_publisher_gui",
            executable="joint_state_publisher_gui",
        ),
        
        # Camera
        Node(
            package='usb_cam',
            executable='usb_cam_node_exe',
            name='camera',
            parameters=[{
                'video_device': '/dev/video0',
                'image_width': 640,
                'image_height': 480,
                'pixel_format': 'yuyv',
                'framerate': 15.0
            }]
        ),
    ])