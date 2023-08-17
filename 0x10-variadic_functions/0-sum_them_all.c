#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the count of the unasigned int
 *
 * Return: sum of the arguments and zero when n is zero
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list argu;

	sum = 0;
	va_start(argu,n);

	if (n == 0)
	{
	return (0);
	}
	for (i = 0; i < n; i++)
	{
		int m;
		m = va_arg(argu, unsigned int);
		sum += m;
	}
	va_end(argu);
	return (sum);
}

