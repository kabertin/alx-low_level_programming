#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * no parameter
 *
 * no return
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
