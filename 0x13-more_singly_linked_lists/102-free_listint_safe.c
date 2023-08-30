#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to the first node in linked list.
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	int difference;
	listint_t *temp;
	size_t leng = 0;

	if (!h || !*h)
	{
	return (0);
	}
	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		leng++;
		}
		else
		{
		free(*h);
		*h = NULL;
		leng++;
		break;
		}
	}
	*h = NULL;
	return (leng);
}
