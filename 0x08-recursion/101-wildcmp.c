#include "main.h"

/**
 * wildcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (0);
	else
		return (1);
}
