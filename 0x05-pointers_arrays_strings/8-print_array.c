#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers then a new line
 * @a: Array of numbers to be printed
 * @n: elements of an array of integers to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
