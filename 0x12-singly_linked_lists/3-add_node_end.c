#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string to put in node
 * Return: address or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *a = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (a->next)
		a = a->next;
	a->next = n;

	return (n);
}

