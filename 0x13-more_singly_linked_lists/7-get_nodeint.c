#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: listint_t list
 * @index: index of list
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;

for (count = 0; count < index; count++)
{
head = head->next;
if (head == NULL)
{
return (NULL);
}
}
return (head);
}
