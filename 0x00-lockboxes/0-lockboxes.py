#!/usr/bin/python3
"""
given n number of boxes, each box numbered sequentially (indexed),
each box may contain keys to itself or other boxes
"""


def canUnlockAll(boxes):
    keyL = boxes[0]
    open = [0]

    for key in keyL:
        if key not in open:
            open.append(key)
            keyL.extend(boxes[key])

    if len(boxes) == len(open):
        return True
    else:
        return False
