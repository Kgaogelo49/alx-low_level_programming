#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory allocated by malloc
 * @old_size: size of the allocated memory for the pointer
 * @new_size: new size of the new memory block.
 *
 * Return: pointer to the allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_pointer;
	char *pointer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer = malloc(new_size);
	if (!pointer)
		return (NULL);

	old_pointer = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer[i] = old_pointer[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer[i] = old_pointer[i];
	}

	free(ptr);
	return (pointer);
}
