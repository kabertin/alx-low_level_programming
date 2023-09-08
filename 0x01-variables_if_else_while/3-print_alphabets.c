#include <stdio.h>

/**
 * main - Entry point
 *
 * Dscription: print alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int alphabet_lowercase = 'a';
	int alphabet_uppercase = 'A';

	while (alphabet_lowercase <= 'z')
	{
		putchar(alphabet_lowercase);
		alphabet_lowercase++;
	}
	while (alphabet_uppercase <= 'Z')
	{
		putchar(alphabet_uppercase);
		alphabet_uppercase++;
	}
	putchar('\n');
	return (0);
}
