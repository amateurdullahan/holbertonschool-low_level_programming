#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to previously allocated mem
 * @old_size: size of ptr
 * @new_size: new size of memory block
 *
 * Return: pointer to new memory block OR NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  /*unsigned int c = 0;*/

if (new_size == old_size)
{
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}

