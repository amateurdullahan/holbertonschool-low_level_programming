#include "search_algos.h"

/**
 * linear_search - search linerally
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: index or -1
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
