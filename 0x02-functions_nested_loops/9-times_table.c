#include "main.h"

/**
 * times_table - prints the 9 times table
 * No parameter
 * No return
*/

void times_table(void)
{
	int row, column, product;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			product = row * column;
			if (product < 10)
			{
				if (column > 0)
					_putchar(' ');
			}
			else
			{
				_putchar(product / 10 + '0');
			}
			_putchar(product % 10 + '0');
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
