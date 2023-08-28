#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats 2 strings
 * @s1: first string
 * @s2: secong
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	char *join;
	int a, b;

	if (s1 == NULL)
		s1 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	join = malloc(sizeof(char) * (a + b + 1));

	if (join == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		join[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		join[a] = s2[b];
		a++, b++;
	}

	join[a] = '\0';
	return (join);
}
