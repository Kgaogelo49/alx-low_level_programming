#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: counts the number of arguments
 * @argv: the arguments in the form of a string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}

	return (0);
}
