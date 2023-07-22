#include "main.h"

/**
 * _isdigit - Checks for a digit
 *
 * @c: The digit to be checked
 *
 * Return: 1 if it a digit and 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
