#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: size of array
 * @c: char to initialize array with
 * Return: null or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)

		return (NULL);

	for (i = 0; i < size; i++)

		array[i] = c;
	return (array);
}
