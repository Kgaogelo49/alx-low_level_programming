#include <stddef.h>

/**
 * _strncpy - copies a string from source to destination
 * @dest: destination buffer to copy the string
 * @src: source string to be copied
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (dest);
}
