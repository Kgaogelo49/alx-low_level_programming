#include "function_pointers.h"

/**
 * array_iterator - executes function given as an input on each int in array
 * @array: an array of integers given as parameters
 * @size: the size of the array
 * @action: a pointer to the function given as a parameters
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
