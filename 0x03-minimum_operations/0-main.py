#!/usr/bin/python3
"""
Main file for testing
"""

minOperations = __import__('0-minoperations').minOperations

n = 4
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 12
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 482
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 1
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 3.14
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 99
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))