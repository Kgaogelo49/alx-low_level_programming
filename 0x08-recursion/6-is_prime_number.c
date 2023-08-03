#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: the number to be checked
 *
 * Return: 1 if the n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - responsible for checking if n is prime number
 * @n: the number to be checked
 * @divisor: the number used to divide other numbers
 * Return: 1 if the n is a prime number, otherwise 0
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
	return (1);
	}
	if (n % divisor == 0)
	{
	return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}
