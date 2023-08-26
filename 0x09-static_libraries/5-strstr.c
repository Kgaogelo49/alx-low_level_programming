#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the substring to be found
 * @needle: the complete string to be searched
 *
 * Return: a pointer to the found substring and NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
