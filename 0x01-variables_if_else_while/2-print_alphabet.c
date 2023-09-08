#include <stdio.h>

/**
 * main - Entry point
 *
 * Dscription: print alphabet in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
