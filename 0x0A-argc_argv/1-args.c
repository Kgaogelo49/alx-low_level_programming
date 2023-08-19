#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the count of the arguments in an array
 * @argv: the arguments in the form of a strong
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	(void)argc;

	if (argc > 0)
	{
	printf("%d\n", argc);
	}
	return (0);

}
