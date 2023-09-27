#include "main.h"

/**
 * _sqrt_recursion - effectuing natural square root
 *
 * @n: parameter
 * @value: square root
 *
 * Return: integer
 */

int squart(int n, int value);
int _sqrt_recursion(int n)
{
	return (squart(n, 1));
}

/**
 * squart - search the sqrt
 * @n: int to find the square root
 * @value: square root
 * Return: integer
 */

int squart(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (squart(n, value + 1));
	else
		return (-1);
}
