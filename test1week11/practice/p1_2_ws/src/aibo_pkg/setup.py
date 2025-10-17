from setuptools import find_packages, setup

package_name = 'aibo_pkg'

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
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'Server_aibo = aibo_pkg.server_aibo:main',
            'Client_aibo = aibo_pkg.client_aibo:main'
        ],
    },
)
