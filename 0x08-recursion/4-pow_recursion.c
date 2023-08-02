#include "main.h"
#include <math.h>

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: intiger for the arithmatic expression
 * @y: integer for the arithmatic expression
 *
 * Return: -1 if y is less than 0, otherwise 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
