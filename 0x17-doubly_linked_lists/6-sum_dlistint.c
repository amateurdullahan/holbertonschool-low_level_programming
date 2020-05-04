#include "lists.h"

/**
 * sum_dlistint - returns the sum all data in list
 * @head: head of list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
{
return (sum);
}

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
