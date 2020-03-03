#include <stdlib.h>

/**
 * *create_array - create array of chars
 * @size: size of array
 * @c: specific char to create array of
 *
 * Return: pointer to array OR NULL
 */

char *create_array(unsigned int size, char c)
{
unsigned int n;
char *p; 

if (size == 0)
{
return (NULL);
}
else
p = malloc(size * sizeof(char));

for(n = 0; n < size; n++)
{
p[n] = c;
}
return (p);
}
