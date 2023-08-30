#include "lists.h"

/**
 * add_nodeint - function that add new node at the beginning of listint_t list
 * @head: a pointer to the pointer that holds the first node in the list
 * @n: integers to insert in the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New;

	New = malloc(sizeof(listint_t));
	if (!New)
	{
		return (NULL);
	}
	New->n = n;
	New->next = *head;
	*head = New;

	return (New);
}
