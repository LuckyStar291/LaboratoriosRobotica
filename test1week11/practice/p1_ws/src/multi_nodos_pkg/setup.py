import os 
from glob import glob 
from setuptools import find_packages, setup

package_name = 'multi_nodos_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))) 
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='luz',
    maintainer_email='luz.soria.carvajal@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            "sensor = multi_nodos_pkg.sensor_node:main",
            "filter = multi_nodos_pkg.filter_node:main",
            "planner = multi_nodos_pkg.planner_node:main",
            "controller = multi_nodos_pkg.controller_node:main",
            "logger = multi_nodos_pkg.logger_node:main"
        ],
    },
)
