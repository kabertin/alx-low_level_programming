#include "main.h"

/**
 * rev_string - function that prints a string in reverse
 *
 * @s: a parameter passed to our fx as array
 *
 * Return nothing
 */

void rev_string(char *s)
{
	int length;
	int start;
	int end;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	start = 0;
	end = length - 1;
	while (start < end)
	{
		char temp;

		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
