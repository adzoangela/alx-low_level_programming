#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: string
 * @n: number of integers
 * @...: variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int ind;

	va_start(number, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(number, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(number);
}
