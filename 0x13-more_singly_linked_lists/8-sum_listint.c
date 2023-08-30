
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: first node in the linked listint_t list
 * Return: resulting sum, if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int Sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	Sum += temp->n;
	temp = temp->next;
	}
	return (Sum);
}
