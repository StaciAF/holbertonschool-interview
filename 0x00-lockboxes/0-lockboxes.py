#!/usr/bin/python3


def canUnlockAll(boxes):
    keyL = boxes[0]
    open = [0]
    for key in keyL:
        open.append(key)
        keyL.extend(boxes[key])
    if len(boxes) == len(open):
        return True
    else:
        return False
