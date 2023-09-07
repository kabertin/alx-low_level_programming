#include <stdio.h>
/* A program that print the size of different data types*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long integer: %zu bytes\n", sizeof(long int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	return (0);
}
