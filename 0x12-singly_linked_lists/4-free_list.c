#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: linked list_t list to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temps;

	while (head)
	{
		temps = head->next;
		free(head->str);
		free(head);
		head = temps;
	}
}
