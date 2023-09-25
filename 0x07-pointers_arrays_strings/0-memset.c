#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: param pointer
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iteration;

	for (iteration = 0; n > 0; iteration++, n--)
	{
		s[iteration] = b;
	}
	return (s);
}
