#!/usr/bin/python3
"""
this module creates a function to calculate rain collected
"""


def rain(walls):
    """this method calculates how much water
    will be retained then returns amount
    """
    if not walls:
        return 0
    length = (len(walls) - 2)
    i = 1
    while i < (length):
        each = walls[i]
        each += each
        i += 1
    return each
