#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: where to copy to
 * @src: where from
 * @n: number of elements
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iteration;

	for (iteration = 0; iteration < n; iteration++)
	{
		dest[iteration] = src[iteration];
	}
	return (dest);
}
