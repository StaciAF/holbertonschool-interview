#!/usr/bin/python3
"""
this module creates a function to calculate rain collected
"""


def rain(walls):
    """this method calculates how much water
    will be retained then returns amount
    """
    amount = 0
    for i in range(len(walls)):
        left_max = max(walls[:i + 1])
        right_max = max(walls[i:])
        amount += max(min(left_max, right_max) - walls[i], 0)
    return amount
