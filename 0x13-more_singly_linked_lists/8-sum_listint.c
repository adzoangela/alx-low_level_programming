#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum pf all elements
 * @head: node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *new = head;

	while (new)
	{
		add += new->n;
		new = new->next;
	}

	return (add);
}
