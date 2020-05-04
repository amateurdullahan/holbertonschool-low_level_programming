#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of dlistint_t list
 * @head: head of dlistint_t list
 * @index: location in list to return
 *
 * Return: location of node in list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int loc;

for (loc = 0; loc < index && head != NULL; loc++)
{
head = head->next;
}
if (head != NULL)
{
return (head);
}
else
{
return (NULL);
}
}
