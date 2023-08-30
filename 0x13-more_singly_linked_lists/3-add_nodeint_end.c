#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: pointer to the first element in the node
 * @n: integers to be  inserted in the new element
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New;
	listint_t *temp = *head;

	New = malloc(sizeof(listint_t));
	if (!New)
	{
		return (NULL);
	}
	New->n = n;
	New->next = NULL;

	if (*head == NULL)
	{
		*head = New;
		return (New);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = New;

	return (New);
}
