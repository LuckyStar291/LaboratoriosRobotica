from ucb_interfaces.srv import Rot                                                          # CHANGE
import numpy as np  # Libreria para calculos matematicos
import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(Rot, 'transform', self.transform_angles)       # CHANGE

    def transform_angles(self, request, response):
        ang = request.angle
        
        p_i = np.array([[request.px],
                        [request.py],
                        [request.pz]])

        angle = np.deg2rad(ang) 

        M = np.array([[np.cos(angle), -np.sin(angle), 0],
                      [np.sin(angle),  np.cos(angle), 0],
                      [            0,              0, 1]])
        
        pf = M @ p_i
        
        print(pf)
        print(pf.shape)
        response.fx = float(pf[0])
        response.fy = float(pf[1])
        response.fz = float(pf[2])
        
        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()