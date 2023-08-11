#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the memory allocated for a 2D array
 * @grid: pointer to the 2D array
 * @height: the number of rows of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
