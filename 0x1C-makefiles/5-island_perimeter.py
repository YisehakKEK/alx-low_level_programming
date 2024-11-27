#!/usr/bin/python3
"""
Module 5-island_perimeter
Defines a function that calculates the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of an island in the grid.
    
    Args:
        grid (list of list of int): A 2D grid where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Add 4 for the current land cell
                perimeter += 4
                # Subtract 2 for each adjacent land cell (to avoid double counting)
                if i > 0 and grid[i-1][j] == 1:  # Check above
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:  # Check left
                    perimeter -= 2
    return perimeter
