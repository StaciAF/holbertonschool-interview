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
i = 0
stat_list = []
file_list = []
stat_dict = {}

try:
    for line in fileinput.input():
        if line == '\n':
            continue
        count += 1
        tup_status = re.findall(status_regex, line)
        status_code = ''.join(tup_status)
        status_code = status_code.strip()
        stat_list.append(status_code)
        stat_list.sort()
        tup_fileSize = re.findall(file_regex, line)
        file_size = ''.join(tup_fileSize)
        file_size = file_size.strip()
        file_size = int(file_size)
        file_list.append(file_size)
        total_file = sum(file_list)
        if count == 10:
            print("File size: " + str(total_file))
            for status in stat_list:
                if status not in stat_dict:
                    stat_dict[status] = 1
                else:
                    stat_dict[status] += 1
                # sum_list = str(stat_list.count(status))
                # stat_dict = {status: sum_list}
                # stat_dict.update({status: sum_list})
                # print("STAT:" + status + "SUM:" + sum_list)
            # print(stat_dict)
            # print(stat_dict)
            # if stat_dict[st] in unique_codes:
            #     print(stat_dict)
            for k, v in sorted(stat_dict.items()):
                print(str(k) + ": " + str(v))
            #     # for code_val in stat_dict['code']:
                #     for count_val in stat_dict['count']:
                #         print(code_val + ": " + count_val)
            count = 0
            stat_list.clear()
except KeyboardInterrupt as error:
    print("File size: " + str(total_file))
    for status in stat_list:
        if status not in stat_dict:
            stat_dict[status] = 1
        else:
            stat_dict[status] += 1
    for k, v in sorted(stat_dict.items()):
        print(str(k) + ": " + str(v))
