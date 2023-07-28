#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be copied from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}

	for (len2 = 0; src[len2] != '\0'; len2++)
	{
	}

	if (n > len2)
	n = len2;

	for (i = 0; i < n; i++)
	{
	dest[len1 + i] = src[i];
	}

	dest[len1 + i] = '\0';

	return (dest);
}
