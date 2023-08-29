#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointeer
 */
void free_listint2(listint_t **head)
{
	listint_t *off_digi;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		off_digi = (*head)->next;
		free(*head);
		*head = off_digi;
	}

	*head = NULL;
}

