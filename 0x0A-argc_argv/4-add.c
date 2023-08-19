#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - program that adds positive numbers
 * @argc: the count of the arguments in an array
 * @argv: the arguments in the form of a strong
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 0)
	{
	printf("0\n");
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
	int num;
	char *arg = argv[i];
	int j;

	for (j = 0; arg[j] != '\0'; j++)
	{
	if (arg[j] < '0' || arg[j] > '9')
	{
	printf("Error\n");
	return (1);
	}
	}
	num = atoi(arg);

	if (num <= 0)
	{
	continue;
	}
	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
