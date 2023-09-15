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
	long int c;
	long int i;
	
	c = 612852475143;
	for (i = 2; i < c; i++)
	{
		while (c % i == 0)
		{
			c = c / i;
		}
	}
	printf("The largest prime factor is: %ld\n", c);
	return (0);}
