#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: an array of parameters to be searched
 * @size: size of the array
 * @cmp: a pointer to the function given as an input
 *
 * Return: -1 an array/cpm/size is NULL otherwise return int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}

	}
	return (-1);
}
