#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array  and initializes it with a specific char
 * @size: size of the memory to be allocated
 * @c: the array to be assigned to the characters
 *
 * Return: NULL if size is 0, pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *aray;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	
	aray = (char *)malloc(size * sizeof(char));

	if (aray == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	aray[i] = c;
	}

	return (aray);
}
