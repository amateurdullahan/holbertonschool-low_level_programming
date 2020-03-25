#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node at index
 * @head: listint_t list
 * @idx: position in index to insert
 * @n: data to add to new node
 *
 * Return: address of new node OR NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *current;

current = *head;
new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

new->n = n;

if (idx == 0)
{
new->next = current;
*head = new;
return (*head);
}

while (idx > 0)
{
current = current->next;
if (current == NULL)
{
free(new);
return (NULL);
}
idx--;
}
new->next = current->next;
current->next = new;
return (new);
}
