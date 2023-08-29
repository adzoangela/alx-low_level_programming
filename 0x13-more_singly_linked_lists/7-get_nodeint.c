#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer
 * @index: index
 * Return: pointer or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *off_digi = head;

	while (off_digi && a < index)
	{
		off_digi = off_digi->next;
		a++;
	}

	return (off_digi ? off_digi : NULL);
}
