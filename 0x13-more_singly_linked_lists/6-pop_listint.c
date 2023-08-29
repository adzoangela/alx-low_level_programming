#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node
 * @head: pointer
 * Return: data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *off_digi;
	int digi;

	if (!head || !*head)
	{
		return (0);
	}

	digi = (*head)->n;
	off_digi = (*head)->next;
	free(*head);
	*head = off_digi;

	return (digi);
}
