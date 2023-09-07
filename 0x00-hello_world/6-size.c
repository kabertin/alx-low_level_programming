#include <stdio.h>
/* A program that print the size of different data types*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t;
	int y;
	long int u;
	long long int i;
	float o;

	printf("Size of char: %lu bytes\n", sizeof(t));
	printf("Size of int: %lu bytes\n", sizeof(y));
	printf("Size of long integer: %lu bytes\n", sizeof(u));
	printf("Size of long long integer: %lu bytes\n", sizeof(i));
	printf("Size of float: %lu bytes\n", sizeof(o));
	return (0);
}
