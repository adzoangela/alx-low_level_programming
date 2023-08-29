#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds node to end
 * @head: pointer
 * @n: content
 * Return: null or node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *digi;
	listint_t *off_digi = *head;

	digi = malloc(sizeof(listint_t));
	if (!digi)
	{
		return (NULL);
	}

	digi->n = n;
	digi->next = NULL;

	if (*head == NULL)
	{
		*head = digi;
		return (digi);
	}

	while (off_digi->next)
		off_digi = off_digi->next;

	off_digi->next = digi;

	return (digi);
}
