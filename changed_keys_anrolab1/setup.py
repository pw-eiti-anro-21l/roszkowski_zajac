from setuptools import setup
import os
from glob import glob
package_name = 'changed_keys_anrolab1'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*_launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dominika',
    maintainer_email='domio626@gmail.com',
    description='Używanie klawiszy u-góra, n-dół, j-prawo, h- lewo do sterowania zolwiem',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'talker = changed_keys_anrolab1.movement_publisher:main',
        ],
    },
)
