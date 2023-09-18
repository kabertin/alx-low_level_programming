#include <stdio.h>

/**
 * print_array - prints elements of array integers
 *
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
