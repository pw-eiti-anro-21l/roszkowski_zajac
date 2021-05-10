import os
from glob import glob
from setuptools import setup
from setuptools import find_packages

package_name = 'anro4'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.py')),
        (os.path.join('share', package_name), glob('urdf/*')),
        (os.path.join('share', package_name), glob('anro4/*')),
        (os.path.join('share', package_name), glob('*.json')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dominika',
    maintainer_email='domio626@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'interpolation_service = anro4.jint:main',
            'interpolation_client = anro4.jcmd:main',
            'op_client = anro4.ocmd:main',
            'op_service = anro4.oint:main',
        ],
    },
)
