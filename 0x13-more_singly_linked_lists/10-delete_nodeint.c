#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to the first element in the listint_t list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *current = NULL;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
	if (!temp || !(temp->next))
	{
	return (-1);
	}
	temp = temp->next;
	j++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
