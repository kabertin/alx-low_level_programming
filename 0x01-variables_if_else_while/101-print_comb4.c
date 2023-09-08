#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print possible combination of three digits numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 48;
	int j;
	int k;

	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
