#include "main.h"
#include <stdio.h>

/**
 * little - check whether ascii is lowercase
 *
 * @c: param as char
 *
 * Return: true is 1 and false is 0
 */

int little(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * seedelim - check whether ascii is delimiter
 *
 * @c: param as character
 *
 * Return: true is 1 and false is 0
 */

int seedelim(char c)
{
	int i;
	char seedelim[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == seedelim[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: param as array
 *
 * Return: pointer to an array
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int delim = 1;

	while (*str)
	{
		if (seedelim(*str))
			delim = 1;
		else if (little(*str) && delim)
		{
			*str -= 32;
			delim = 0;
		}
		else
			delim = 0;
		str++;
	}
	return (ptr);
}
