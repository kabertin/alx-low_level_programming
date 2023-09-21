#include "main.h"

/**
 * print_number - print char as numbers
 *
 * @num: int param
 *
 * Return: nothing
 *
 */

void print_number(int num)
{
	unsigned int numb1;

	numb1 = num;
	if (num < 0)
	{
		_putchar('-');
		numb1 = -num;
	}
	if (numb1 / 10 != 0)
	{
		print_number(numb1 / 10);
	}
	_putchar((numb1 % 10) + '0');
}
