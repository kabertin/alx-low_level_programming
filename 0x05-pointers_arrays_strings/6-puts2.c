#include "main.h"

/**
 * puts2 - function that prints every other char of a string
 *
 * @str: a parameter passed to our fx as array
 *
 * Return nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
