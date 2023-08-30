#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer
 * @index: index
 * Return: 0, 1, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *add_new = *head;
	listint_t *nw = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(add_new);
		return (1);
	}

	while (a < index - 1)
	{
		if (add_new || !(add_new->next))
			return (-1);
		add_new = add_new->next;
		a++;
	}

	nw = add_new->next;
	add_new->next = nw->next;
	free(nw);

	return (1);
}

