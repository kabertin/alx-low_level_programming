#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check the prime numer
 * @n: parameter
 * @num: paramater
 *
 * Return: 1
 */

int get_prime(int n, int num);
int is_prime_number(int n)
{
	return (get_prime(n, 2));
}

/**
 * get_prime - checker whether a number is prime
 * @n: param 1
 * @num: param 2
 *
 * Return: int
 */

int get_prime(int n, int num)
{
	if (num >= n && n > 1)
		return (1);
	else if (n % num == 0 || n <= 1)
		return (0);
	else
		return (get_prime(n, num + 1));
}
