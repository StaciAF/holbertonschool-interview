#!/usr/bin/python3
"""
this module includes a script that reads stdin
line by line and computes requested metrics
"""

import fileinput
import re

regex = '\s+\d+\s+'
count = 0
stat_list = []

for line in fileinput.input():
    count += 1
    print(line)
    tup_status = re.findall(regex, line)
    status_code = ''.join(tup_status)
    status_code = status_code.strip()
    stat_list.append(status_code)
    stat_list = set(stat_list)
    stat_list = list(stat_list)
    stat_list.sort()
    if count == 10:
        for status in stat_list:
            print(status + ': ' + str(stat_list.count(status)))
        count = 0
        stat_list = []
