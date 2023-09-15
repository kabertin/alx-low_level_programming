#include <stdio.h>

/**
 * main - entry point
 * Description: a program that finds and prints 
 * the largest prime factor of a number
 * No parameter
 * Return: (0) Success
 */

int main(void)
{
	long long int c, factors[];
	int i, j;

	c = 612852475143;
	j = 0;

	for (i = 2; i < 10; i++)
	{
		while (c % i == 0)
		{
			c = c / i;
			factors[j] = c;
			j++;
		}
	}
	return (0);
}
