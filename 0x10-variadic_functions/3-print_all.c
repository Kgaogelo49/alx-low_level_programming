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
	char c;
	char *s;
	float f;

	va_start(argu, format);
	i = 0;

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
		c = va_arg(argu, int);
		printf("%c", c);
		break;
		case 'i':
		printf("%d", va_arg(argu, int));
		break;
		case 'f':
			f = va_arg(argu, double);
			printf("%f", f);
			break;
		case 's':
		s = va_arg(argu, char *);

		if (s == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", s);
		}
		break;
	}

	if ((format[i + 1]) && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
	{
	printf(", ");
	}

	i++;
	}

	va_end(argu);
	printf("\n");
}
