#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to checked
 *
 * Return: 1 if it is palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}

/**
 * is_palindrome_helper - recursively checking if the string is a palindrome
 * @s: string to checked
 * @start: character at the start
 * @end: character at the end
 *
 * Return: 1 if it is palindrome, otherwise 0
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}

	if (s[start] != s[end])
	{
	return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
