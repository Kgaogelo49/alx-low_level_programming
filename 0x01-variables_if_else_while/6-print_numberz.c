#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
