#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: result or 0
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i = 0;
	char c;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		c = b[i];
		if (c != '0' && c != '1')
			return (0);
		result = (result << 1) + (c - '0');
	}
	return (result);
}
