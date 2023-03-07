#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success, return the character written as an unsigned char cast
 *         to an int. On error, return -1.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
