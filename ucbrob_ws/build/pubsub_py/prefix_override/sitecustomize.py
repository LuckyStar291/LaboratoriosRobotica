import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/luz/Escritorio/ucbrob_ws/install/pubsub_py'
