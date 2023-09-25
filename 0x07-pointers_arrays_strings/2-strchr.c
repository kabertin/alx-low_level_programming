#include "main.h"

/**
 * _strchr - fills memory with a constant byte c
 *
 * @s: param pointer to array
 * @c: param contant byte
 *
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int it;

	for (it = 0; s[it] >= '\0'; it++)
	{
		if (s[it] == c)
		{
			return (s + it);
		}
	}
	return ('\0');
}
