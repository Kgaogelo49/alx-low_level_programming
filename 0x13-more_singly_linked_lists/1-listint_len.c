#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked listint_t list
 * @h: listint_t type list
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t Num = 0;

	while (h)
	{
		Num++;
		h = h->next;
	}

	return (Num);
}
