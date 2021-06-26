#!/usr/bin/python3
"""
Interview Prep @ Holberton
"""


def makeChange(coins, total):
    """
    this function determines the fewest
        coins needed to meet the given amount total
    """
    if total <= 0:
        return 0

    Opt = [0 for i in range(0, total+1)]

    coinLen = len(coins)
    for i in range(1, total+1):
        smallest = float("inf")
        for j in range(0, coinLen):
            if (coins[j] <= i):
                smallest = min(smallest, Opt[i - coins[j]])
        Opt[i] = 1 + smallest
    if smallest == float('inf'):
        return -1
    return Opt[total]
