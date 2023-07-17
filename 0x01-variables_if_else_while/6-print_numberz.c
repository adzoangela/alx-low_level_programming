#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numeric digits 0 to 9 as characters
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}

	putchar('\n');

	return (0);
}
