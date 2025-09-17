from ucb_interfaces.srv import Rot                                                        # CHANGE: al name de tu interface (comunicacion) y el nombre del archivo .srv creado
import numpy as np  # Libreria para calculos matematicos
import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(Rot, 'transform', self.trasnform_angles_callback)       # CHANGE: al name del srv, creas un topico llamado 'transform' y llamas a la funcion trandform_angles_callback como tu callback :P

    def trasnform_angles_callback(self, request, response):
        ang = request.angle
        
        p_i = np.array([[request.px],
                        [request.py],
                        [request.pz]])

        angle = np.deg2rad(ang) 

        M = np.array([[np.cos(angle), -np.sin(angle), 0],
                      [np.sin(angle),  np.cos(angle), 0],
                      [            0,              0, 1]])
        
        pf = M @ p_i
        
        #print("Matriz de rotación Z:")
        #print(M)
        print("\nPunto inicial:")
        print(p_i)
        print("\nPunto final:")
        
        print(pf)
        #print(pf.shape)
        
        response.fx = float(pf[0])
        response.fy = float(pf[1])
        response.fz = float(pf[2])
        
        self.get_logger().info(f'Transformación completada: ({request.px}, {request.py}, {request.pz}) -> ({response.fx:.2f}, {response.fy:.2f}, {response.fz:.2f})')
        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)
    minimal_service.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()