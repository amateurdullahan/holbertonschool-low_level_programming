#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees allocated memory of dog
 * @d: dog that needs to be free
 *
 * Return: if null
 */

void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
free(d);
}
