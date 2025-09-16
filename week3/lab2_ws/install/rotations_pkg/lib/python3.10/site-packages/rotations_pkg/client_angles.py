import sys
from ucb_interfaces.srv import Rot
import rclpy
from rclpy.node import Node

class MinimalClientAsync(Node):
    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(Rot, 'transform')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Rot.Request()

    def send_request(self, ang, x, y, z):
        # CORRECCIÓN: Usar angle (no angles)
        self.req.angle = ang
        self.req.px = x
        self.req.py = y
        self.req.pz = z
        return self.cli.call_async(self.req)

def main():
    rclpy.init()
    minimal_client = MinimalClientAsync()
    
    # CORRECCIÓN: Solo necesitas 4 argumentos, no 5
    if len(sys.argv) != 5:
        print("Uso: ros2 run ucb_interfaces client_angles <angle> <px> <py> <pz>")
        return 1
    
    try:
        ang = int(sys.argv[1])
        x = int(sys.argv[2])
        y = int(sys.argv[3])
        z = int(sys.argv[4])
        
        future = minimal_client.send_request(ang, x, y, z)
        rclpy.spin_until_future_complete(minimal_client, future)
        
        if future.done():
            response = future.result()
            print(f"\n Transformación completada:")
            print(f"   Punto inicial: ({x}, {y}, {z})")
            print(f"   Ángulo: {ang}°")
            print(f"   Punto final: ({response.fx:.2f}, {response.fy:.2f}, {response.fz:.2f})")
        else:
            print(" No se recibió respuesta del servidor")
            
    except ValueError:
        print(" Error: Todos los parámetros deben ser números enteros")
    except Exception as e:
        print(f" Error: {e}")
    finally:
        minimal_client.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()