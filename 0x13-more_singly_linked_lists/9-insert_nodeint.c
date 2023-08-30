#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insertion
 * @head: node
 * @idx: index
 * @n: data
 * Return: null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *add;
	listint_t *add_new = *head;

	add = malloc(sizeof(listint_t));
	if (!add || !head)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}

	for (a = 0; add_new && a < idx; a++)
	{
		if (a == idx - 1)
		{
			add->next = add_new->next;
			add_new->next = add;
			return (add);
		}
		else
			add_new = add_new->next;
	}
	return (NULL);
}
