#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @n: numbers to be printed
 * @separator: the string to be printed between numbers
 * @...: integers to be printed
 * Return: nothing if separator is NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		int m;

		m = va_arg(argu, int);

		printf("%d", m);
		if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	va_end(argu);
	printf("\n");
}
