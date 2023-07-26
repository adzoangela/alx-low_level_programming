#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose last digit to print.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int m = n % 10;

	_putchar('0' + m);
	_putchar('\n');
	return (m);
}
