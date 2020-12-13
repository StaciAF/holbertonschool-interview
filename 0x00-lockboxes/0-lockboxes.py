#!/usr/bin/python3
"""
given n number of boxes, each box numbered sequentially (indexed),
each box may contain keys to itself or other boxes
"""


def canUnlockAll(boxes):
    """
    Moves through boxes to determine if given keys
    can unlock all given boxes

    Parameters
    ----------
    boxes : list
        list of lists given to represent boxes with keys inside

    Returns
    -------
    boolean
        True if all boxes can be unlocked
        False if all boxes can not be unlocked
    """

    if type(boxes) is not list:
        return False

    keyL = boxes[0]
    open = [0]
    for key in keyL:
        if key not in open:
            try:
                open.append(key)
                keyL.extend(boxes[key])
            except:
                continue

    if len(boxes) == len(open):
        return True
    return False
