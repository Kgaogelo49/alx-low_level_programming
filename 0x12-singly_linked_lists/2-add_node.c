#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @str: the new string to be added in the node
 * @head: double pointer to the list_t list
 * Return: NULL or the address to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newer;
	unsigned int len = 0;


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
	newer->next = (*head);
	(*head) = newer;

	return (*head);
}
