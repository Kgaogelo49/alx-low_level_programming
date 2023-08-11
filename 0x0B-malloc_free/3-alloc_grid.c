#include"main.h"
#include <stdlib.h>


/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @height: the number of columns of an array
 * @width: the number of width of an array
 *
 * Return: pointers to an array
 */

int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **array;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	array[i] = (int *)malloc(width * sizeof(int));

	if (array[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(array[j]);
	}
	free(array);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
	array[i][j] = 0;
	}
	}

	return (array);
}
/**
 * free_array - free the memory allocated for an array
 * @array: 2D array
 * @height: the columns of the array
 *
 * Return: void
 */
void free_array(int **array, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(array[i]);
	}
	free(array);
}
