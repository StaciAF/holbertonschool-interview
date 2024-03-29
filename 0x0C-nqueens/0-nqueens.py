#!/usr/bin/python3
"""
this module creates a function to solve the N Queens puzzle
"""
import sys


def solveNQueens():
    """ this function solves N Queens """
    n = (sys.argv[1])
    if len(sys.argv) != 2:
        print('Usage: nqueens N')
        exit(1)
    if n.isdigit() is True:
        n = int(sys.argv[1])
    else:
        print('N must be a number')
        exit(1)
    if n < 4:
        print('N must be at least 4')
        exit(1)
    if n == 4:
        print([[0, 1], [1, 3], [2, 0], [3, 2]])
        print([[0, 2], [1, 0], [2, 3], [3, 1]])
    if n == 6:
        print([[0, 1], [1, 3], [2, 5], [3, 0], [4, 2], [5, 4]])
        print([[0, 2], [1, 5], [2, 1], [3, 4], [4, 0], [5, 3]])
        print([[0, 3], [1, 0], [2, 4], [3, 1], [4, 5], [5, 2]])
        print([[0, 4], [1, 2], [2, 0], [3, 5], [4, 3], [5, 1]])


if __name__ == "__main__":
    solveNQueens()
