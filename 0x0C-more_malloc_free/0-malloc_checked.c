#include <stdio.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
