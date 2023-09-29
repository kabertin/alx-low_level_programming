#include "main.h"

/**
 * _strncat - function that concantenates two strings
 *
 * @dest: param1 which is a pointer
 * @src: param2 which is a pointer
 * @n: parama int passed to fx
 *
 * Return: a pointer of type char
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		lendest++;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[lendest + i] = *src;
		src++;
	}
	dest[lendest + i] = '\0';
	return (dest);
}
