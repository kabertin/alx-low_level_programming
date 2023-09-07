#include <stdio.h>
/* A program that print the size of different data types*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of long integer: %lu bytes\n", sizeof(long int));
	printf("Size of long long integer: %lu bytes\n", sizeof(long long int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	return (0);
}
