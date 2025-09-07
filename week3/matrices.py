#SEMANA 4 - Ejercicio 2 Laboratorio

# --------------------------- LIBRERIAS ---------------------------
import numpy as np  # Libreria para calculos matematicos

# --------------------------- VARIABLES PRINCIPALES ---------------------------

#angulo de rotacion g
angle1 = 0
angle2 = 0
angle3 = 0

#traslacion
L1 = 69.5
L2 = 71.5
# --------------------------- FUNCIONES ---------------------------
def rot_y(angle): #matriz 3x3 respecto al eje Y
    angle = np.deg2rad(angle)
    return np.array([
        [ np.cos(angle), 0, np.sin(angle), 0],
        [             0, 1,             0, 0],
        [-np.sin(angle), 0, np.cos(angle), 0],
        [             0, 0,             0, 1]
    ])

def rot_x(angle): #matriz 3x3 respecto al eje X
    angle = np.deg2rad(angle)
    return np.array([
        [1,             0,              0, 0],
        [0, np.cos(angle), -np.sin(angle), 0],
        [0, np.sin(angle),  np.cos(angle), 0],
        [             0, 0,             0, 1]
    ])
    
def traslacion(L): #matriz de traslacion
    return np.array([
        [ 1, 0, 0, 0],
        [ 0, 1, 0, 0],
        [ 0, 0, 1, -L],
        [ 0, 0, 0, 1]
        ])      
    

# --------------------------- CALCULO ---------------------------


Rx = rot_x(angle1)
Ry1 = rot_y(angle2)
Tz1 = traslacion(L1)
Ry2 = rot_y(angle3)
Tz2 = traslacion(L2)

M = Rx @ Ry1 @ Tz1 @ Ry2 @ Tz2

# Multiplicación matricial = @
print(M) #multiplicacionmultiples matrices
