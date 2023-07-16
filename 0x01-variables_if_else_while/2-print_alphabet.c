#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}

