#include "main.h"

/**
 * get_endianness - checks endian
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
