from setuptools import find_packages, setup

package_name = 'lab_p_ps_s'

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
    maintainer_email='luz.soria.carvajal@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "Origen = lab_p_ps_s.origen:main",
            "Process = lab_p_ps_s.process:main",
            "Destino = lab_p_ps_s.destino:main"
        ],
    },
)
