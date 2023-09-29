#include "main.h"

/**
 * _abs - will compute the absolute value of an integer
 *@x: this is the parameter passed to our function _abs
 * Return: (x or -x)Success
*/

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
