#include "holberton.h"

/**
 * free_grid - use free function on grid
 * @grid: previous function
 * @height: input height (size)
 *
 * Return: freed memory of grid
 */

void free_grid(int **grid, int height)
{
int c;

if (grid != NULL || height != 0)
{
for (c = 0; c < height; c++)
{
free(grid[c]);
}
free(grid);
}
}
