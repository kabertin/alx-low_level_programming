#include "main.h"

/**
 * _atoi - fx that convert a string to an integer
 *
 * @s: a param passed to our fx
 *
 * Return: (0) Success
 *
 */

int _atoi(char *s)
{
	int i, x, y, lon, f, digit;

	i = 0;
	x = 0;
	y = 0;
	lon = 0;
	f = 0;
	digit = 0;

	while (s[lon] != '\0')
	{
		lon++;
	}
	while (i < lon && f == 0)
	{
		if (s[i] == '-')
			++x;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (x % 2)
				digit = -digit;
			y = y * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '0')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (y);
}
