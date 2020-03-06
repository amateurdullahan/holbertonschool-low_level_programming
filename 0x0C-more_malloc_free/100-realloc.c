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
  char *npr, *store;

unsigned int c, true_size;

if (new_size > old_size)
{
true_size = old_size;
}
if (new_size < old_size)
{
true_size = new_size;
}


if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
npr = malloc(new_size);
for (c = 0; c < true_size; c++)
{
  npr[c] = *(unsigned int*)(ptr) + c;
}
free(ptr);
ptr = malloc(new_size);
store = ptr;
for (c = 0; c < true_size; c++)
{
  store[c] = npr[c];
}
return (ptr);
}

