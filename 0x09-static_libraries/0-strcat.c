#include "main.h"

/**
 * _strcat - function that concantenates two strings
 *
 * @dest: param1 which is a pointer
 * @src: param2 which is a pointer
 *
 * Return: a pointer of type char
 *
 */

char *_strcat(char *dest, char *src)
{
	int lendest = 0;
	int lensrc = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		lendest++;
	for (i = 0; src[i] != '\0'; i++)
		lensrc++;
	for (i = 0; i <= lensrc; i++)
		dest[lendest + i] = src[i];
	return (dest);
}
