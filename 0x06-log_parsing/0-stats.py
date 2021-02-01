#!/usr/bin/python3
"""
this module includes a script that reads stdin
line by line and computes requested metrics
"""
import sys
import re
import traceback


if __name__ == "__main__":
    status_regex = '\s+\d+\s+'
    file_regex = '\s+\d+\s+(.*)'
    count = 0
    stat_list = []
    file_list = []
    stat_dict = {}
    try:
        for line in sys.stdin:
            if line == '':
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
            if status_code in stat_dict:
                stat_dict[status_code] += 1
            else:
                stat_dict[status_code] = 1
            if count % 10 == 0:
                count = 0
                print("File size: {}".format(total_file))
                for k, v in sorted(stat_dict.items()):
                    print(str(k) + ": " + str(v))
        print("File size: {}".format(total_file))
        for k, v in sorted(stat_dict.items()):
            print(str(k) + ": " + str(v))
                # count = 0
                # stat_list.clear()
    except KeyboardInterrupt as error:
        print("File size: {}".format(total_file))
        for status in stat_list:
            if status not in stat_dict:
                stat_dict[status] = 1
            else:
                stat_dict[status] += 1
        for k, v in sorted(stat_dict.items()):
            print(str(k) + ": " + str(v))
