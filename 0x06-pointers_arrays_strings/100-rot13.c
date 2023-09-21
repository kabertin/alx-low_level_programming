#include "main.h"

/**
 * rot13 - encoding a string using rot13
 *
 * @m: pointing parameter
 *
 * Return: a pointer
*/

char *rot13(char *m)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = m;

	while (*m)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*m == rot13[i])
			{
				*m = ROT13[i];
				break;
			}
		}
		m++;
	}
	return (ptr);
}
