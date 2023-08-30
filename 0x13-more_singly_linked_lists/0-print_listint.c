#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h:  linked list for listint_t
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t Num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		Num++;
		h = h->next;
	}
	return (Num);
}
