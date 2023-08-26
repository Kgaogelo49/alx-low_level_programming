#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the substring to be measured
 * @accept: the complete string
 *
 * Return:  the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				m++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
