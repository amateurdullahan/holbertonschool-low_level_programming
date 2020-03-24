#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of linked list_t list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
if (head->next != NULL)
{
free_list(head->next);
}
free(head);
}
