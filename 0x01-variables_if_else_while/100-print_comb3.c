#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print possible combination of two digits numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 48;
	int j;

	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
			putchar(',');
			putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
