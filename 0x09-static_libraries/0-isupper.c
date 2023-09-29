#include "main.h"

/**
 * _isupper - check whether a character is upper or lower
 *
 * @c: a parameter passed to our function
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
