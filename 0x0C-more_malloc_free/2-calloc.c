#include <stdlib.h>
#include "main.h"

/**
 * _mems - fill memory
 * @s: area
 * @b: char
 * @n: number
 * Return: pointer
 */
char *_mems(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * _calloc - allocate memory
 * @nmemb: number
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);
	if (pointer == NULL)

	_mems(pointer, 0, nmemb * size);

	return (pointer);
}
