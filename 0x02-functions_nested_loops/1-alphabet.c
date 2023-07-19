#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Description: Prints the lowercase alphabet from 'a' to 'z'
 *
 * Return: void
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
