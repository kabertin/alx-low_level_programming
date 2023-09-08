#include <stdio.h>

/**
 * main - Entry point
 *
 * Dscription: print alphabet in lowercase and in reverse
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int alphabet_lowercase = 'z';

	while (alphabet_lowercase >= 'a')
	{
		putchar(alphabet_lowercase);
		alphabet_lowercase--;
	}
	putchar('\n');
	return (0);
}
