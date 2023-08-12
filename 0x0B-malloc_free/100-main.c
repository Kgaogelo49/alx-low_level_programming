#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 * @ac: an int argument to be passed
 * @av: a character argument to be passed
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
	return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
