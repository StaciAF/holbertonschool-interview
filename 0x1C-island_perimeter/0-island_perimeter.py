#!/usr/bin/python3
"""
these are my docstrings
"""


def island_perimeter(grid):
    """ this function calculates the perimeter of an island """
    perimeter = 0
    for i, j in enumerate(grid):
        for x, y in enumerate(j):
            if y == 1:
                perimeter = perimeter + 4
                if x and j[x-1]:
                    perimeter = perimeter - 2
                if i and grid[i-1][x]:
                    perimeter = perimeter - 2
    return perimeter
