#!/usr/bin/python3
"""
checking for UTF-8 encoding, validator
"""

def validUTF8(data):
    numBytes = 0
    # iterate over each integer in list
    for each in data:
        # get least 8 bits
        binaryForm = format(each, '#010b')[-8:]
        if numBytes == 0:
            # how many 1s in beginning
            for bit in binaryForm:
                if bit == '0':
                    break
                numBytes += 1

            if numBytes == 0:
                continue
            # can only be 1-4 bytes
            if numBytes == 1 or numBytes > 4:
                return False
        else:
            if not (binaryForm[0] == '1' and binaryForm[1] == '0'):
                return False
        numBytes -= 1

    return numBytes == 0
