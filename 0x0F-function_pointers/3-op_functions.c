#include "3-calc.h"

/**
 * op_add -  returns the sum of a and b
 * @a: an integer given as a parameter
 * @b: an integer given as a parameter
 *
 * Return: sum, nothing if a/b are NULL
 */
int op_add(int a, int b)
{
	int sum;
	sum = a + b;

	return (sum);
}

/**
 * op_sub - returns the difference between a and b
 * @a: an integer given as a parameter
 * @b: an integer given as a parameter
 *
 * Return: difference, nothing if a/b are NULL
 */
int op_sub(int a, int b)
{
	int difference;
	diffence = a - b;

	return (difference);
}
/**
 * op_mul - returns the product of a and b
 * @a: an integer given as a parameter
 * @b: an integer given as a parameter
 * Return: product, nothing if a/b are NULL
 */
int op_mul(int a, int b)
{
	int product;

	product = a * b;

	return (product);
}
/**
 * op_div - returns the result of division of a by b
 * @a: an integer given as a parameter
 * @b: an integer given as a parameter
 * Return: result, nothing if a/b are NULL
 */
int op_div(int a, int b)
{
	int result;
	
	result = a / b;
	
	return (result);
}
/**
 * op_div - returns the remainder of the division of a by b
 * @a: an integer given as a parameter
 * @b: an integer given as a parameter
 * Return: remainder, nothing if a/b are NULL
 */
int op_mod(int a, int b)
{
	int remainder;

	remainder = a % b;

	return (remainder);
}
