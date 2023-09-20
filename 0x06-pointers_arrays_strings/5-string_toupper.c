#include "main.h"

/**
 * string_toupper - changes all lowercase to upper case
 * @str: param pointer to an array
 *
 * Return: string
 *
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
