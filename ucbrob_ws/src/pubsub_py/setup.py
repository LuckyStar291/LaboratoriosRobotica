from setuptools import find_packages, setup

package_name = 'pubsub_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='luz',
    maintainer_email='luz@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            #EN ACA TENEMOS QUE DIFINIR TODOS LOS NODOS QUE HEMOS DEFINIDO
            "Publicador = pubsub_py.publicador:main", #nombre del paquete.nombre del archivo python 
            "Subscriptor = pubsub_py.subscriptor:main",
            "Origen = pubsub_py.origen:main",
            "Process = pubsub_py.process:main",
            "Destino = pubsub_py.destino:main",
            "Angulo = pubsub_py.pub_angles:main",
            "Matrix = pubsub_py.sub_angles:main",
            "Server = pubsub_py.server_angles:main",
            "Client = pubsub_py.client_angles:main"
        ],
    },
)
