#!/usr/bin/python3
"""
given n number of boxes, each box numbered sequentially (indexed),
each box may contain keys to itself or other boxes
"""


def canUnlockAll(boxes):
    """ Moves through boxes to determine if given keys
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

    keyL = boxes[0]
    open = [0]

    if type(boxes) is not list:
        return False

    for key in keyL:
        if key not in open:
            open.append(key)
            keyL.extend(boxes[key])

    if len(boxes) == len(open):
        return True
    else:
        return False
