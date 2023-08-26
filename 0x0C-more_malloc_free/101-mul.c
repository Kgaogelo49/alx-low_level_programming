#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - function that check if a string has a non-digit char
 * @string: string to be evaluated
 *
 * Return: 0 for a non-digit , otherwise 1
 */
int is_digit(char *string)
{

	while (*string)
	{
		if (*string < '0' || *string > '9')
			return (0);
		string++;
	}
	return (1);
}

/**
 * _strlen - function that returns the length of a string
 * @string: string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *string) 
{
	int len = 0;

	while (*string)
	{
		len++;
		string++;
	}
	return (len);
}

/**
 * errors - handles errors for the main function
 *
 * Return: void
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers inputed
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length;
	int i;
	int cary;
	int *outcome, b = 0;
	int num1, num2;
	
	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		errors();
	}
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length = length1 + length2 + 1;

	outcome = malloc(sizeof(int) * length);

	if (!outcome)
	{
		return (1);
	}
	for (i = 0; i < length; i++)
	{
		outcome[i] = 0;
	}
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = s1[length1] - '0';
		cary = 0;

		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			num2 = s2[length2] - '0';
			cary += outcome[length1 + length2 + 1] + (num1 * num2);
			outcome[length1 + length2 + 1] = cary % 10;
			cary /= 10;
		}
		if (cary > 0)
			outcome[length1 + length2 + 1] += cary;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (outcome[i])
			b = 1;
		if (b)
			_putchar(outcome[i] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(outcome);
	return (0);
}
