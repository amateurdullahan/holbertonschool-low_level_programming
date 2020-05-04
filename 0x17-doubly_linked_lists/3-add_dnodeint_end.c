#include "lists.h"

/**
 * add_dnodeint_end - add a node to the head of the list
 * @head: doubly linked list
 * @n: n to add to new node
 *
 * Return: address to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *temp;
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
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;
return (new);
}
