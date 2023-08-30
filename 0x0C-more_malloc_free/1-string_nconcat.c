#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * s2: string
 * @n: bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int st1= 0;
	unsigned int st2= 0;
	unsigned int all_size = (n < st2) ? (st1 + n) : (st1 + st2);

	while (s1 && s1[st1])
		st1++;
	while (s2 && s2[st2])
		st2++;

	c = (char *)malloc(sizeof(char) * (all_size + 1));

	if (!c)
		return(NULL);

	while (a < st1)
	{
		c[a] = s1[a];
		a++;
	}

	while (b < n && s2[b])
		c[a++] = s2[b++];
	
	c[a] = '\0';

	return (c);
}
