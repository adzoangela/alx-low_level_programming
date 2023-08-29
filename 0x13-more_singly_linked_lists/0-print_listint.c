#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: what to print
 * Return: result of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t digi = 0;

	while (h)
	{
		printf("%d\n", h->n);
		digi++;

		h = h->next;
	}

	return (digi);
}
