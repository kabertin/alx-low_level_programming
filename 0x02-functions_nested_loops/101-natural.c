#include <stdio.h>
/**
 * main - function of summing multiples
 *
 * Return: (0) Success
 *
*/

int main(void)
{
	int add = 0;
	int a;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			add = add + a;
	}
	printf("%d\n", add);
	return (0);
}
