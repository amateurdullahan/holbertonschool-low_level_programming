#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at position
 * @h: dlist
 * @idx: index to add at
 * @n: data to add to new node
 *
 * Return: address of new node at index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *next, *cur;
unsigned int c;

if (h == NULL)
return (NULL);

if (idx != 0)
{
cur = *h;
for (c = 0; c < idx - 1 && cur != NULL; c++)
{
cur = cur->next;
}
if (cur == NULL)
{
return (NULL);
}
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
next = *h;
*h = new;
new->prev = NULL;
}
else
{
new->prev = cur;
next = cur->next;
cur->next = new;
}
new->next = next;
if (new->next != NULL)
{
(new->next)->prev = new;
}
return (new);
}
