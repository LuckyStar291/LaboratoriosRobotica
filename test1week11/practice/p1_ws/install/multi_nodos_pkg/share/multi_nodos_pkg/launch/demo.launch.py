from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Levanta TODOS los nodos desde una sola terminal
        Node(package='multi_robot', namespace='multi_robot', executable='sensor'),
        Node(package='multi_robot', namespace='multi_robot', executable='filter'),
        Node(package='multi_robot', namespace='multi_robot', executable='planner'),
        Node(package='multi_robot', namespace='multi_robot', executable='controller'),
        Node(package='multi_robot', namespace='multi_robot', executable='logger')
    ])
