#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: the count of the arguments in an array
 * @argv: the arguments in the form of a strong
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int results;
	int num1;
	int num2;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	results = num1 * num2;

	printf("%d\n", results);

	return (0);
}
