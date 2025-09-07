import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/luz/Escritorio/Robotica/week2/lab1ej2_ws/install/lab_p_ps_s'
