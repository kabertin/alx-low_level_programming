#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str: a parameter passed to our fx as array
 *
 * Return nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
