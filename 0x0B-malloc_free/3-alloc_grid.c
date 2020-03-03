#include <stdlib.h>

/**
 * **alloc_grid - returns pointer to 2 dimensional array of int
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer toarray OR NULL
 */

int **alloc_grid(int width, int height)
{
int **grid;
int c, d;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int));

if (grid == NULL)
{
free(grid);
return (NULL);
}
for (c = 0; c < height; c++)
{
grid[c] = malloc(sizeof(int) * width);
if (grid == NULL)
{
free(grid);
return (NULL);
}
for (d = 0; d < width; d++)
{
grid[c][d] = 0;
}
}
return (grid);
}
