"""
CookieCutter post-generate hook. Cleans up unneeded files.
"""

import os

USE_CONTRIBUTOR_COVENANT = '{{ cookiecutter.use_contributor_covenant }}'
PROJECT_LICENSE = '{{ cookiecutter.license }}'

if USE_CONTRIBUTOR_COVENANT[0].upper() != 'Y':
    if os.path.exists('CODE_OF_CONDUCT.md'):
        os.unlink('CODE_OF_CONDUCT.md')

if PROJECT_LICENSE == 'not open source':
    if os.path.exists('LICENSE.md'):
        os.unlink('LICENSE.md')
