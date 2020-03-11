#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function as parameter to array
 * @array: array to be created
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
size_t c;
if (array == NULL)
{
return;
}

for (c = 0; c < size; c++)
{
action(array[c]);
}
}
