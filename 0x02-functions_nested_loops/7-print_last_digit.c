#include "main.h"

/**
 * print_last_digit - will print the last digit
 *
 * @y: this is the parameter to be passed to our function
 *
 * Return: is the last digit of y
*/

int print_last_digit(int y)
{
	int last;

	last = y % 10;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}
