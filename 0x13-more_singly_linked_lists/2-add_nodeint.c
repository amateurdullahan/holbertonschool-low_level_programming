#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_nodeint - add new node at beginning of `listint_t` list
 * @head: double pointer to head
 * @n: int to be saved in new node
 *
 * Return: Address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = *head;

*head = new_node;
return (new_node);
}
