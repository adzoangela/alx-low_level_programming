#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Description: Prints the lowercase alphabet from 'a' to 'z' ten times,
 *              followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	char m;

	for (n = 0; n < 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
