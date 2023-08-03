#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1: strings to be compared
 * @s2: strings to be compared
 *
 * Return: 1 if they are identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
	if (*s2 == '*' && *(s2 + 1) == '*')
	{
	return (wildcmp(s1, s2 + 1));
	}
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*' && *s1 != '\0')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
