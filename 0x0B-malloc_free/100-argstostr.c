#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: input
 * @av: array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b;
	int c = 0;
	int d = 0;
	char *inp;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}

	d += ac;

	inp = malloc(sizeof(char) * d + 1);
	if (inp == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			inp[c] = av[a][b];
			c++;
		}
		if (inp[c] == '\0')
		{
			inp[c++] = '\n';
		}
	}
	return (inp);
}
