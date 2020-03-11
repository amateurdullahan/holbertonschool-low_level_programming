#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer within an array
 * @array: the array of integers
 * @size: size of array
 * @cmp: pointer to function to compare value
 *
 * Return: -1 OR more than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int c;

if (array == NULL || cmp == NULL)
{
return;
}

if (size <= 0)
{
return (-1);
}
for(c = 0; c < size; c++)
{
cmp(array[c]);
if (cmp(array[c]) != 0)
{
return (c);
}
}
return (-1);
}
