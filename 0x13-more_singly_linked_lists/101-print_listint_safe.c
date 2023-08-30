#include <stdio.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head);

size_t looped_listint_len(const listint_t *head);


/**
 * looped_listint_len - funtion that count the number of unique nodes available
 * @head: pointer to the head of the listint_t to be checked.
 * Return: 0, if the list is not looped otherwise number of nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *haree, *totois;
	size_t nodes;

	nodes = 1;

	if (head == NULL || head->next == NULL)
	{
	return (0);
	}
	totois = head->next;
	haree = (head->next)->next;

	while (haree)
	{
		if (totois == haree)
		{
			totois = head;
			while (totois != haree)
			{
				nodes++;
				totois = totois->next;
				haree = haree->next;
			}

			totois = totois->next;
			while (totois != haree)
			{
			nodes++;
			totois = totois->next;
			}
			return (nodes);
		}
		totois = totois->next;
		haree = (haree->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe -  function that prints a listint_t linked list
 * @head: pointer to the head of the list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t index;
	size_t nodes;

	index = 0;
	nodes = 0;
	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		}
	}
	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

return (nodes);
}
