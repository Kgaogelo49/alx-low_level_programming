#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: count of strings
 * @...: strings to be printed
 * Return: nothing if separator is NULL, (nil) if string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
	char *str;

	str = va_arg(argu, char *);

	if (str == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);

	}
	}
	va_end(argu);
	printf("\n");
}
