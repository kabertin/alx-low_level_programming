#include "main.h"

/**
 * puts_half - function that prints every other char of a string
 *
 * @str: a parameter passed to our fx as array
 *
 * Return nothing
 */

void puts_half(char *str)
{
	int i;
	int length;
	int start;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		start = length / 2;
		for (i = start; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length % 2 != 0)
	{
		start = (length - 1) / 2;
		for (i = start; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
