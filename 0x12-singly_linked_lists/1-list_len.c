#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the num of elements in linked list_t list
 * @h: pointer to the list_t list
 * Return: num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
