#include "main.h"

/**
 * swap_int - function that swaps a value of 2 integers
 *
 * @a: parameter 1 passed to our function
 * @b: parameter 2 passed to our function
 *
 * Return: nothing
 *
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
