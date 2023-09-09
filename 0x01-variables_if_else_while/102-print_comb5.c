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
	int k;
	int l;

	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = i;
			while (k <= 57)
			{
				l = j + 1;
				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56)
					{	putchar(',');
						putchar(' ');
					}
					l++;
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
