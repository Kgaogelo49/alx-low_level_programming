#include "main.h"
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 100

/**
 * count_words - count thw number of words in a string
 * @str: te string to be counted
 *
 * Return: word count
 */

int count_words(const char *str)
{
	int count = 0;
	int is_in_word = 0;

	while (*str)
	{
	if (*str == ' ' || *str == '\t' || *str == '\n')
	{
	is_in_word = 0;
	}
	else if (!is_in_word)
	{
	is_in_word = 1;
	count++;
	}
	str++;
	}

	return (count);
}

/**
 * next_word - function that checks the next word in a string
 * @str: string to be checked
 *
 * Return: the string
 */
char *next_word(const char *str)
{
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
	{
	str++;
	}
	return (char *)str;
}
/**
 * word_len - checks the length word the word
 * @str: the string to be assessed
 *
 * Return: the length of the word
 */

int word_len(const char *str)
{
	int len = 0;

	while (*str && *str != ' ' && *str != '\t' && *str != '\n')
	{
	len++;
	str++;
	}
	return (len);
}
/**
 * strtow - function that splits a string into words
 * @str: the string to be checked
 *
 * Return: NULL if str == NULL or str == "" and Null if the fuction fails
 */

char **strtow(char *str)
{
	int num_words = count_words(str);
	char **words;
	int word_index;
	int len = word_len(str);
	int i;

	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}

	if (num_words == 0)
	{
	return (NULL);
	}
	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
	return (NULL);
	}

	word_index = 0;
	while (*str)
	{
	str = next_word(str);
	if (*str == '\0')
	{
		break;
	}

	len = word_len(str);
	words[word_index] = (char *)malloc((len + 1) * sizeof(char));
	if (words[word_index] == NULL)
	{
	for (i = 0; i < word_index; i++)
	{
	free(words[i]);
	}
	free(words);
	return (NULL);
	}
}
	strncpy(words[word_index], str, len);
	words[word_index][len] = '\0';

	str += len;
	word_index++;

	words[word_index] = NULL;

	return (words);
}
