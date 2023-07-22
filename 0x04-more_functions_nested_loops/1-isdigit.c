#include "main.h"

/**
 * _isdigit - Checks for a digit
 *
 * @c: The digit to be checked
 *
 * Return: 1 if it's a digit, or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return 1;
	}
	return 0;
}
