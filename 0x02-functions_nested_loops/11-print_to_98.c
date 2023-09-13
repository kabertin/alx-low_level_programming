#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - will print all natural numbers from n to 98
 *
 * @n: parameter passed to our argument
 *
 * no return
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
