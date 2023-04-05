#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check code
 * @n: int
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

/**
 * is_prime - checks if a number is prime or not
 * @n: int
 * @i: int
 * Return: int
 */
int is_prime(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}
