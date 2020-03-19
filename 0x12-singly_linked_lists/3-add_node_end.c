#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end - add new node at end of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 *
 * Return: Address of new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
int c;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

for (c = 0; str[c]; c++)
;

new_node->len = c;
new_node->str = strdup(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

temp = *head;

while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
