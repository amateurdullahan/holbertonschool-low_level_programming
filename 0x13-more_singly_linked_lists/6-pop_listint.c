#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
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
temp->n = head->n;
temp->next = head->next;

ret = temp->n;
free(head);
head = temp->next;
return (ret);
}
