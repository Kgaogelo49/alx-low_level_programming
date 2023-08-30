#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: linked listint_t list to be searched
 *
 * Return: address of the node where the loop start or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *faster = head;
	listint_t *slower = head;

	if (!head)
	{
	return (NULL);
	}
	while (slower && faster && faster->next)
	{
		faster = faster->next->next;
		slower = slower->next;
		if (faster == slower)
		{
		slower = head;
		while (slower != faster)
		{
			slower = slower->next;
			faster = faster->next;
		}
		return (faster);
		}
	}
	return (NULL);
}
