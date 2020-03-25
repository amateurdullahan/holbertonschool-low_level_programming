#include "lists.h"
#include <stdlib.h>

/**
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *previous;
unsigned int count;
current = *head;

for (count = 0; count < index; count++)
{
previous = current;
current = current->next;
if (current == NULL)
{
return (-1);
}
}
previous->next = current->next;
free(current);
return (1);
}
