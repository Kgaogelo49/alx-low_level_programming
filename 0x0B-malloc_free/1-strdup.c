#include "main.h"
#include <stdlib.h>

/**
 * strleng - measures the lenght of the string
 * @str: string to be measured
 *
 * Return: string length
 */

int strleng(const char *str)
{
	const char *s;
	int length;

	s = str;

	length = 0;

	while (*s)
	{
	s++;
	length++;
	}
	return (length);
}

/**
 * strcopy - creates a copy of the string
 * @destin: the destination string
 * @source: the source string
 *
 * Return: the destination string
 */

char *strcopy(char *destin, const char *source)
{
	char *d = destin;
	const char *s = source;

	while (*s)
	{
	*d++ = *s++;
	}
	*d = '\0';
	return (destin);
}
/**
 * _strdup - returns pointer to new string which is duplicate of the str
 * @str: string to be duplicated
 *
 * Return: a pointer to a new string, NULL if str is a NULL
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = (char *)malloc(strleng(str) + 1);

	if (duplicate == NULL)
	{
	return (NULL);
	}
	strcopy(duplicate, str);

	return (duplicate);
}
