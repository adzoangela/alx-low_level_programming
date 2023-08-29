#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements
 * @h: linked list type
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t digi = 0;

	while (h)
	{
		digi++;
		h = h->next;
	}

	return (digi);
}
