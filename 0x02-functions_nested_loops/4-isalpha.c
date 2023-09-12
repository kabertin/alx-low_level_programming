#include "main.h"

/**
 * _isalpha - will check whether the alphabets is a character
 *@c: this is the parameter to be checked
 * Return: 1 or 0
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
