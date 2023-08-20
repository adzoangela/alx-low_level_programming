#include <stdio.h>

/**
 * main - Write a program that prints its name
 * Return: 0
 * ?
 */
int main(int argc, char *argv[])
{
	char *name = argv[0];
	(void)argc;

	printf("%s\n", name);
	return (0);
}
