#!/usr/bin/python3
"""
Given H, your text editor can execute only two operations in this file:
Copy All and Paste. Given n, write a method that calculates the fewest number
of operations needed to result in exactly n H characters in the file.
"""


def minOperations(n):
    """
    finds minimum operations to acheive n of H printing task with copy
    and paste operations and returns as integer
    ----------
    n : int
        the number of times H is to be displayed in text editor
    Returns
    -------
    int
        represents the minimum number of copy/paste operations
        needed to display n H
    """
    divList = []
    if (isinstance(n, int) is False):
        return 0
    if (n < 2):
        return 0
    while (n % 2 == 0):
        divList.append(2)
        n = n // 2
    for i in range(3, n + 1, 2):
        while (n % i == 0):
            divList.append(i)
            n = n // i
    return sum(divList)
