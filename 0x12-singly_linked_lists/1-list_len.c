#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
