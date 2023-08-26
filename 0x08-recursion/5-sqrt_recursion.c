#include "main.h"

/**
 * _sqrt_assistant - performs a binary search to find the square root
 * @upper: the upper bound of the search range
 * @lower: lower bound of the search range
 * @n: the number for which we want to find the square root
 *
 * Return: -1 if no natural square root found, or the square root number
 */

int _sqrt_assistant(int n, int lower, int upper)
{
	int mid;
	int square;

	if (lower > upper)
	{
		return (-1);
	}

	mid = (lower + upper) / 2;
	square = (mid * mid);

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_assistant(n, mid + 1, upper));
	}
	else
	{
		return (_sqrt_assistant(n, lower, mid - 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be square rooted
 *
 * Return: -1 if n is negative, 0r the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
		return (_sqrt_assistant(n, 0, n));
}
