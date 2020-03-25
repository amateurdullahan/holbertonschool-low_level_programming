#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find the beginning and end of loop
 * @head: listint_t struct list
 *
 * Return: address
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortise;
listint_t *hare;

if (head == NULL)
return (NULL);

tortise = head;
hare = head;

while (hare->next != NULL && hare->next->next != NULL)
{
tortise = tortise->next;
hare = hare->next->next;
if (tortise == hare)
{
tortise = head;
while (tortise != hare)
{
tortise = tortise->next;
hare = hare->next;
}
return (hare);
}
}
return (NULL);
}
