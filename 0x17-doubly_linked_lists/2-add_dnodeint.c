#include "lists.h"

/**
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *next;
if (head == NULL)
{
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;
if (new->next != NULL)
{
next = new->next;
next->prev = new;
}
return (new);
}
