#include <stdlib.h>

/**
 * *_calloc - allocated memory for an array
 * @nmemb: array elements
 * @size: size of array
 *
 * Return: pointer to array OR NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *array;
unsigned int c = 0;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
else
array = malloc(sizeof(size) * nmemb);
if (array == NULL)
{
free(array);
return (NULL);
}
else
while (c < nmemb)
{
array[c] = 0;
c++;
}
return (array);
}
