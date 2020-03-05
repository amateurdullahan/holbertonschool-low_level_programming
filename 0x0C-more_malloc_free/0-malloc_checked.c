#include <stdlib.h>

/**
 * *malloc_checked - allocates and then checks memory
 * @b: size of memory allocated
 *
 * Return: pointer to memory OR 98
 */

void *malloc_checked(unsigned int b)
{
void *r;

r = malloc(b);

if (r == NULL)
{
exit(98);
}
return (r);
}
