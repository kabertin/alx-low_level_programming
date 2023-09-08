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
	int al_low = 'a';

	while (al_low <= 'z')
	{
		if (al_low == 'e' || al_low == 'q')
		{
			al_low++;
		}
		putchar(al_low);
		al_low++;
	}
	putchar('\n');
	return (0);
}
