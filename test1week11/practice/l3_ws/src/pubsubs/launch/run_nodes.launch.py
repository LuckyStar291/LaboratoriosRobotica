from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pubsubs',                        # nombre del paquete
            namespace='pubsubs',                               # nombre del nodo en el grafo
            executable='mensajero'                       # alias definido en setup.py (entry_points)
        
        ),
        Node(
            package='pubsubs',                        # nombre del paquete
            namespace='pubsubs',                               # nombre del nodo en el grafo
            executable='captador'                       # alias definido en setup.py (entry_points)
        
        )
    ])