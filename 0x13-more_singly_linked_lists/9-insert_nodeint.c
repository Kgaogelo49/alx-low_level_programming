#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert new node at a given position
 * @head: pointer to the first node in the listint_t list
 * @idx: index where the new node is added
 * @n: integers to be inserted in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *New;
	unsigned int j;
	listint_t *temp = *head;

	New = malloc(sizeof(listint_t));
	if (!New || !head)
	{
		return (NULL);
	}
	New->n = n;
	New->next = NULL;

	if (idx == 0)
	{
		New->next = *head;
		*head = New;
		return (New);
	}

	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			New->next = temp->next;
			temp->next = New;
			return (New);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
