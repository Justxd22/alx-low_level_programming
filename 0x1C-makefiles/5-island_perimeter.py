#!/usr/bin/python3
"""Module island_perimeter()."""


def island_perimeter(grid):
    """Calc perimeter of island."""
    p = 0
    for y, row in enumerate(grid):
        for x, c in enumerate(row):
            if c == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    p += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    p += 1
                if x == 0 or grid[y][x - 1] == 0:
                    p += 1
                if x == len(row) - 1 or grid[y][x + 1] == 0:
                    p += 1
    return p
