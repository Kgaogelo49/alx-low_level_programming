#include <stdio.h>

/**
 * main - function
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
		putchar(',');
		}
		if (i < 10)
		{
		putchar(' ');
		}
	}
	return (0);
}
