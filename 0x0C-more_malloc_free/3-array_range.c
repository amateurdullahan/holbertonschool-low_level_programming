#include <stdlib.h>

/**
 * *array_range - create array of range of integers
 * @min: min integer value
 * @max: max integer value
 *
 * Return: pointer to array OR NULL
 */

int *array_range(int min, int max)
{
int *r;
int c, d;

if (min > max)
{
return (NULL);
}
for (d = min, c = 0; d < max; d++, c++)
;

r = malloc(sizeof(int) * c);
if (r == NULL)
{
free(r);
return (r);
}

for (d = min, c = 0; d < max; d++, c++)
{
r[c] = d;
}
return (r);
}
