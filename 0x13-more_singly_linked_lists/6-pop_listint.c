#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the listint_t linked list
 *
 * Return: the head node’s data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int Num;

	if (!head || !*head)
		return (0);

	Num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (Num);
}
