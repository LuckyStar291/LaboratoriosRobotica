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

    def send_request(self, ang, x,y, z):
        self.req.angles = ang
        self.req.px = x
        self.req.py = y
        self.req.pz = z
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request(int(sys.argv[1]),
                                         int(sys.argv[2]),
                                         int(sys.argv[3]),
                                         int(sys.argv[4]),
                                         int(sys.argv[5]))
    
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    minimal_client.get_logger().info(
        'Result of transform  %d %d %d' %
        (response.fx, response.fy, response.fz))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()