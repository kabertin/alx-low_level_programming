#include "main.h"

/**
 * print_sign - will print the sign of a number
 *@n: this is the parameter passed to our fonction to be checked
 * Return: -1 or 0 or 1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
