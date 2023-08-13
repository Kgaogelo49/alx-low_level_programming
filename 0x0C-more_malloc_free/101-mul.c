#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_integer - Checks if a string is a positive integer
 * @str: The string to be checked
 *
 * Return: 1 if the string is a positive integer, 0 otherwise
 */
int is_positive_integer(const char *str)
{
	if (str == NULL || *str == '\0')
	return (0);

	while (*str != '\0')
	{
	if (!isdigit(*str))
	return (0);
	str++;
	}

	return (1);
}

/**
 * multiply - Multiplies two positive integers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result of the multiplication
 */
unsigned long multiply(unsigned long num1, unsigned long num2)
{
	return (num1 * num2);
}
int string_to_ul(const char *str, unsigned long *result)
{
	char *endptr;

	*result = strtoul(str, &endptr, 10);

	if (*endptr != '\0' || endptr == str || *result == 0)
	{
	return (0);
	}

	return (1);
}
int main(int argc, char *argv[])
{
	int i;
	unsigned long num1, num2;
	unsigned long result;
	char *buffer;
	unsigned long temp;
	int num_digits;

	if (argc != 3 || !is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
	{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	return (98);
	}
	if (!string_to_ul(argv[1], &num1) || !string_to_ul(argv[2], &num2))
	{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	return (98);
	}

	result = multiply(num1, num2);

	if (result == 0)
	{
	_putchar('0');
	}
	else
	{
	temp = result;
	num_digits = 0;

	while (temp > 0)
	{
	temp /= 10;
	}
	num_digits++;
	buffer = malloc((num_digits + 1) * sizeof(char));

	if (buffer == NULL)
	{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	return (98);
	}

	for (i = num_digits - 1; i >= 0; i--)
	{
	buffer[i] = result % 10 + '0';
	result /= 10;
	}

	for (i = 0; i < num_digits; i++)
	{
	_putchar(buffer[i]);
	}
	free(buffer);
	}
	_putchar('\n');

	return (0);
}
