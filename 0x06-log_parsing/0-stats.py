#!/usr/bin/python3
"""
this module includes a script that reads stdin
line by line and computes requested metrics
"""

import fileinput
import re

status_regex = '\s+\d+\s+'
file_regex = '\s+\d+\s+(.*)'
count = 0
stat_list = []
file_list = []

# for line in fileinput.input():
#     count += 1
#     print(line)
#     tup_fileSize = re.findall(file_regex, line)
#     file_size = ''.join(tup_fileSize)
#     file_size = file_size.strip()
#     file_size = int(file_size)
#     while count <= 10:
#         file_list.append(file_size)
#     total_file = sum(file_list)
#     print(total_file)
#     count = 0
for i in range(0, 10):
    for line in fileinput.input():
        count += 1
        # print(line)
        tup_status = re.findall(status_regex, line)
        status_code = ''.join(tup_status)
        status_code = status_code.strip()
        stat_list.append(status_code)
        # stat_list = set(stat_list)
        stat_list = list(stat_list)
        stat_list.sort()
        # print(str(stat_list) + ":STATS")
        tup_fileSize = re.findall(file_regex, line)
        file_size = ''.join(tup_fileSize)
        file_size = file_size.strip()
        file_size = int(file_size)
        file_list.append(file_size)
        total_file = sum(file_list)
        if count == 10:
            print("File size: " + str(total_file))
            for status in stat_list:
                sum_list = str(stat_list.count(status))
                # sum_list = set(sum_list)
                # sum_list = list(sum_list)
                print(status + ": " + sum_list)
            count = 0
            stat_list.clear()
    # if count <= 10:
    #     file_list.append(file_size)
    #     total_file = sum(file_list)
    #     print(total_file)
    #     break
    #     if count == 10:
    #         print("Filesize:" + str(total_file))
