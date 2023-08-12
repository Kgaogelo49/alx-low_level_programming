#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int to be passed
 * @av: a character to be passed
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int total_len;
	int i;
	char *result;
	int current_pos;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
	total_len += strlen(av[i]) + 1;
	}

	result = (char *)malloc(total_len + 1);
	if (result == NULL)
	{
	return (NULL);
	}

	current_pos = 0;
	for (i = 0; i < ac; i++)
	{
	int arg_len;

	arg_len = strlen(av[i]);
	strcpy(result + current_pos, av[i]);
	current_pos += arg_len;
	result[current_pos] = '\n';
	current_pos++;
	}

	result[total_len] = '\0';

	return (result);
}
