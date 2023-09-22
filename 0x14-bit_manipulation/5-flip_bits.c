#include "main.h"

/**
 * flip_bits - counts bits
 * @n: first number
 * @m: second number
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b = 0;
	unsigned long int c;
	unsigned long int d = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = d >> a;
		if (c & 1)
			b++;
	}

	return (b);
}
