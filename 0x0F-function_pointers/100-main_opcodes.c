#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b, a;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (a = 0; a < b; a++)
	{
		if (a == b - 1)
		{
			printf("%02hhx\n", array[a]);
			break;
		}
		printf("%02hhx ", array[a]);
	}
	return (0);
}
