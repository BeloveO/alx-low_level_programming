#!/usr/bin/python3
""" Module to return the perimeter of an island """

def island_perimeter(grid):
    perimeter = 0
    nrows = len(grid)
    if grid != []:
        ncolumns = len(grid[0])
    for a in range(nrows):
        for b in range(ncolumns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == nrows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == ncolumns or grid[a][b + 1] == 0:
                    perimeter += 1
    return perimeter
