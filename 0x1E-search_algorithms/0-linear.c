#include "search_algos.h"

/**
 */

int linear_search(int *array, size_t size, int value)
{
size_t c;

if (array == NULL)
return (-1);

for (c = 0; c < size; c++)
{
printf("Value checked array[%ld] = [%d]\n", c, array[c]);
if (array[c] == value)
return (c);
}

return (-1);
}
