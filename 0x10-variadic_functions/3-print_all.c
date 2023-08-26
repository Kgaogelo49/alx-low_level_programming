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
	char *string, *separ = "";
	int i = 0;

	va_list arguments;

	va_start(arguments, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separ, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(arguments, double));
					break;
				case 's':
					string = va_arg(arguments, char *);
					if (!string)
					{	string = "(nil)";
					}
					printf("%s%s", separ, string);
					break;
				default:
					i++;
					continue;
			}
			separ = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(arguments);
}
