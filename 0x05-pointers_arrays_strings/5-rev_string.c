#include "main.h"

/**
 * rev_string - function that prints a string in reverse
 *
 * @s: a parameter passed to our fx as array
 *
 * Return nothing
 */

void rev_string(char *s)
{
	int length;
	int i;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
