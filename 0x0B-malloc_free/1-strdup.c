#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *new;
	int a, b = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	
	a = 0;
	while (str[a] != '\0')
		a++;

	new = malloc(sizeof(char) * (a + 1));

	if (new ==  NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		new[b] = str[b];

	return (new);
}
