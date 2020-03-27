#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse listint_t list
 * @head: dbl ptr to listint_t list that needs reversal
 *
 * Return: ptr to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *previous, *next;

if (head == NULL || *head == NULL)
{
return (NULL);
}
if ((*head)->next == NULL)
{
return (*head);
}
previous = NULL;

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}

*head = previous;

return (*head);
}
