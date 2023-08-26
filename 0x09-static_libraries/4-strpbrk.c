#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the substring to be assessed
 * @accept: the complete string
 *
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
		if (*s == accept[t])
		return (s);
		}
	s++;
	}

	return ('\0');
}
