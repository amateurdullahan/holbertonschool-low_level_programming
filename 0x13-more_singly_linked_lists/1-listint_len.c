#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - return length of list
 * @h: const struct pointer conatining list
 *
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while(h != NULL)
{
count++;
h = h->next;
}
return (count);
}
