#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
