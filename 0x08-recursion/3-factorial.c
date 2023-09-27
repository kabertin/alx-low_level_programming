#include "main.h"

/**
 * factorial - returns a factorial
 * @n: parameter to factorize
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
