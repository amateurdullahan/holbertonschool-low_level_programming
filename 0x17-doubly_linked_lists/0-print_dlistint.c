#include "lists.h"

/**
 * print_dlistint - print number of nodes in doubly linked lst
 * @h: doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t node = 0;

while (h != NULL)
{
printf("%d\n", h->n);
node++;
h = h->next;
}
  
return (node);
}
