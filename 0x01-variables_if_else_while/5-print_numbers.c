#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digit from 0 up to 9
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
