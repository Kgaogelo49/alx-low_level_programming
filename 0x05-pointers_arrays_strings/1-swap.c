#include "main.h"

/**
 * swap_int - a function that swaps two integers
 * @a: An integer to be swapped
 * @b: An integer to be swapped
 * @m: place holder for a
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
