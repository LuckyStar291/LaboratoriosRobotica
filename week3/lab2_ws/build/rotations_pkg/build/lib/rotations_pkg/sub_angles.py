##### LABORATORIO1:     EJERCICIO   2           (origen, proceso, destino)

import rclpy #libreria lpy
from rclpy.node import Node #nodos

from std_msgs.msg import Int32 #libreria letras
import numpy as np  # Libreria para calculos matematicos


class NumberSubscriber(Node):

    def __init__(self):
        super().__init__('destino')
        self.subscription = self.create_subscription(Int32, 'up', self.listener_callback, 10) #(tipo de dato, nombre del topico/canal de comunicacion, funcion de CALLBACK q se activa cada q escucha algo, valor de cola)
        self.subscription

    def listener_callback(self, msg):
        angle = np.deg2rad(msg.data)   # convierte grados a radianes
        m = np.array([[np.cos(angle), -np.sin(angle)], 
                      [np.sin(angle),  np.cos(angle)]])
        print(m)
        self.get_logger().info('Total: "%s"' % msg.data)

        
        
def main(args=None):
    rclpy.init(args=args)
    node3 = NumberSubscriber()
    rclpy.spin(node3)
    node3.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()