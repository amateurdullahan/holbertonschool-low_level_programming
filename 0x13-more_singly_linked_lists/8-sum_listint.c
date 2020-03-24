#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all data within listint_t list
 * @head: listint_t list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
return (0);
}

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
