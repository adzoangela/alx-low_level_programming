#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}

	putchar('\n');

	return (0);
}
