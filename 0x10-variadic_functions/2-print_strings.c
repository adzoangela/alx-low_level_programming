#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: string
 * @n: number of strings
 * @...: variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str1;
	char *strr;
	unsigned int ind;

	va_start(str1, n);

	for (ind = 0; ind < n; ind++)
	{
		strr = va_arg(str1, char *);

		if (strr  == NULL)
			printf("(nil)");
		else
			printf("%s", strr);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str1);
}
