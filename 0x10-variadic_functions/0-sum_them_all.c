#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Returns the sum
 * @n: number of paramters
 * @...: variable number of paramter
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list to;
	unsigned int a, add = 0;

	va_start(to, n);

	for (a = 0; a < n; a++)
		add += va_arg(to, int);

	va_end(to);

	return (add);
}
