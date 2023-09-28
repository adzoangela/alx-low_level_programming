#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int started = 0;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar(0);
		return;
	}
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
