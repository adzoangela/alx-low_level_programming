#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node
 * @head: pointer to first node
 * @n: content for created node
 * Return: new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *digi;

	digi = malloc(sizeof(listint_t));
	if (!digi)
	{
		return (NULL);
	}

	digi->n = n;
	digi->next = *head;
	*head = digi;

	return (digi);
}
