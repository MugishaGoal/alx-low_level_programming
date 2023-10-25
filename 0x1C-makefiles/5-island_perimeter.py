#!/usr/bin/python3
"""A function that returns the perimeter of the island"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the grid.

    Args:
        grid(lists): A list of list of integers representing the grid.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    width = len(grid[0])
    height = len(grid)

    for x in range(width):
        for y in range(height):
            if grid[x][j] == 1:
                perimeter += 4
                if x > 0 and grid[x - 1][y] == 1:
                    perimeter -= 2
                if y > 0 and grid[x][y - 1] == 1:
                    perimeter -= 2
    return perimeter
