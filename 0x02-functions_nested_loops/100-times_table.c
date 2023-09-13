#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: parameter passed to our function
 *
 * no return
*/

void print_times_table(int n)
{
	int row, column, product;

	if (n > 0 && n < 16)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				if (product < 10)
				{
					if (column > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(product % 10 + '0');
				}
				else if (product > 9 && product < 100)
				{
					if (column > 0)
					{
						_putchar(' ');
					}
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99)
				{
					_putchar((product / 10) / 10 + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar(product % 10 + '0');
				}
				if (column < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
