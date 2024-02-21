#!/usr/bin/python3

def island_perimeter(grid):
    """finding the perimeter of an island"""
    one_count = 0

    for i in grid:
        for j in i:
            if j == 1:
                one_count += 1

    perimeter = (one_count * 2) + 2

    return perimeter
