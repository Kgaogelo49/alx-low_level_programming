#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @str: the string to put in the new node
 * @head : double pointer to the list_t list
 *
 * Return: NULL if it fails or the adress to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newer;
	list_t *temp = *head;

	while (str[len])
	{
		len++;
	}
	newer = malloc(sizeof(list_t));
	if (!newer)
	{
		return (NULL);
	}

	newer->str = strdup(str);
	newer->len = len;
	newer->next = NULL;
	if (*head == NULL)
	{
		*head = newer;
		return (newer);
	}
	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = newer;

	return (newer);
}

