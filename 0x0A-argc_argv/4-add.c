#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints arguments passed to it
 * @argc: number of argum
 * @argv: array of arg
 * Return: (0) or (1)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
				sum = sum + atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);				
			}

		}
		printf("%d\n", sum);
	}
	return (0);
}
