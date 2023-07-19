#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	char j;

	while (j < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		j++;
	}
}
