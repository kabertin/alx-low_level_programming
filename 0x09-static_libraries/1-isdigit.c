#include "main.h"

/**
 * _isdigit - check whether an input is digit or character
 *
 * @c: a parameter passed to our function
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
