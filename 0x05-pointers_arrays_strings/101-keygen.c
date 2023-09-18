#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creating random password
 *
 * Return: (0) Success
 *
 */
int main(void)
{
	int add;
	char h;

	srand(time(NULL));
	while (add <= 2645)
	{
		h = rand() % 128;
		add += h;
		putchar (h);
	}
	putchar(2772 - add);
	return (0);
}
