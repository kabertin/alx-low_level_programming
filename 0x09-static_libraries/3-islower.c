#include "main.h"

/**
 * _islower - will check whether the alphabets is in lowercase
 *@c: this is the parameter to be checked
 * Return: 1 or 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
