#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: a parameter passed to our function
 *
 * Return: size
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			j = i + 1;
			k = size - j;
			while (j < size)
			{
				_putchar(' ');
				j++;
			}
			while (k < size)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
		}
	}
}
