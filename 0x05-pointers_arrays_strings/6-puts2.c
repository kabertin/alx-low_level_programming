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
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
