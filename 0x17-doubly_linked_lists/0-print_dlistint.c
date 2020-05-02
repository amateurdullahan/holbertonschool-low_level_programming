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
  const  dlistint_t *prev = h;
  dlistint_t *next = prev->next;

  while (prev != NULL)
    {
      printf("%d\n", prev->n);
      prev = next;
      next = prev->next;
      node++;
    }
  return (node);
}
