#include "main.h"

/**
 * _pow_recursion -  returns the value of x to pw of y
 *
 * @x: parameter 1
 * @y: parameter 2
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
