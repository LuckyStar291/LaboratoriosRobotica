import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/luz/Escritorio/Robotica/test1week11/practice/l3_ws/install/pubsubs'
