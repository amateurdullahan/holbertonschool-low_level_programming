#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: const list_t that contain nodes
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t ret = 0;

while (h != NULL)
{
ret++;
h = h->next;
}
return (ret);
}
