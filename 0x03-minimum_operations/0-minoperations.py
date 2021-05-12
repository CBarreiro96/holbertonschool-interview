#!/usr/bin/python3
"""
==================== Minimum Operations ==============================
"""


def minOperations(n):
    """
    How many operation we can do with number given?
    :param n: Operation limit
    :return: Integer
    """
    operations_limits = n

    if type(operations_limits) is not int or operations_limits < 2:
        return 0

    min_operations = 2
    total_operations = 0

    while min_operations <= operations_limits:
        if operations_limits % min_operations == 0:
            total_operations += min_operations
            operations_limits = operations_limits / min_operations
        else:
            min_operations += 1

    return total_operations
