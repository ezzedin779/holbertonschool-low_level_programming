#!/usr/bin/python3
""" Island perimeter calculated """


def island_perimeter(grid):
    """ calculate the perimeter of the island described in grid """

    height = len(grid)
    width = len(grid)
    num_1 = 0
    num_0 = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                num_1 += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    num_0 += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    num_0 += 1
    perimeter = num_1 * 4 - num_0 * 2
    return perimeter
