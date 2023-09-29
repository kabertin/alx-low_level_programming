#include "main.h"
#include <stdio.h>

/**
 * main - program that prints arguments passed to it
 * @argc: number of argum
 * @argv: array of arg
 * Return: (0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
