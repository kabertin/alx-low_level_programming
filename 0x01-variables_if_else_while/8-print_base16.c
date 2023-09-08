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
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (alphabet_lowercase <= 'f')
	{
		putchar(alphabet_lowercase);
		alphabet_lowercase++;
	}
	putchar('\n');
	return (0);
}
