#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concantenate 2 strings
 * the function take n portion of second string
 * @s1: string one
 * @s2: stirng two
 * @n: elements to take from s2 to put on s1
 *
 * Return: pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	s = malloc(sizeof(char) * (s1len + n) + 1);
	if (s == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			s[s1len + i] = s2[i];
		s[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			s[s1len + i] = s2[i];
		s[s1len + i] = '\0';
	}
	return (s);
}
