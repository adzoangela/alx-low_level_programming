#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * Return: -1, 1,
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 1));
				}
				}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
	{
	if (i * i > n)
	{
	return (-1);
	}
	else if (i * i == n)
	{
	return (i);
	}
	else
	{
	return (actual_sqrt_recursion(n, i + 1));
			}
			}
