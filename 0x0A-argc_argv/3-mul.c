#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints arguments passed to it
 * @argc: number of argum
 * @argv: array of arg
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product = product * atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
