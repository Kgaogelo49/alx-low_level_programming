#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @n: numbers to be printed
 * @separator: the string to be printed between numbers
 *
 * Return: nothing if separator is NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;

	va_start(argu, n);

	if (separator == NULL)
	{
	return;
	}

	for (i = 0; i < n; i++)
	{
		int m;

		m = va_arg(argu, const unsigned int);

		if (i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", m);
	}
	va_end(argu);
	printf("\n");
}
