#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'examples-rclpy-minimal-client==0.6.3','console_scripts','client'
__requires__ = 'examples-rclpy-minimal-client==0.6.3'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('examples-rclpy-minimal-client==0.6.3', 'console_scripts', 'client')()
    )
