#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes head node and returns value inside
 * @head: listint_t head
 *
 * Return: value inside head
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int ret = 0;

if (head == NULL)
{
return (ret);
}

temp = *head;
*head = temp->next

ret = temp->n;
free(temp);
return (ret);
}
