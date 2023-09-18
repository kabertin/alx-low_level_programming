#include "main.h"

/**
 * _strlen - function that prints the length of a string
 *
 * @s: parameter passed to our function
 *
 * Return: (0) Success
 *
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
