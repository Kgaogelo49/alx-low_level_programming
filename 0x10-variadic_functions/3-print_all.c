#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * void print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: the arguments to be printed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list argu;
	int i;

	va_start(argu, format);
	i = 0;

	while (format && format[i])
	{
	if (format[i] == 'c')
	{
	char c = va_arg(argu, int);

	printf("%c", c);
	}
	else if (format[i] == 'i')
	{
	printf("%d", va_arg(argu, int));
	}
	else if (format[i] == 'f')
	{
	printf("%f", va_arg(argu, double));
	}
	else if (format[i] == 's')
	{
	char *s = va_arg(argu, char *);

	if (s == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", s);
	}
	}

	if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
	{
	printf(", ");
	}

	i++;
	}

	va_end(argu);
	printf("\n");
}
