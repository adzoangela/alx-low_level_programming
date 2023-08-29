#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list.
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *off_digi;

	while (head)
	{
		off_digi = head->next;
		free(head);
		head = off_digi;
	}
}
