#!/usr/bin/python3

import os
import sys

def run(cmd):
    os.system(cmd)

users = sys.argv[1:]

for user in users:
    run(f'mkdir {user}')
    with open(f'{user}/README.md','w+') as file:
        file.write(f'# {user}')
    print(f'created {user}')

run('git add .')
run('git commit -m "Added new users"')
run('git push origin master')
