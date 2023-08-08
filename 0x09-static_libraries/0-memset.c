#include "main.h"

/**
 * _memset() - fills the n bytes of the memory with constant byte b
 * @s: starting adress of memory to be filled
 * @b: the desired byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
