#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i;
	int leng_s1 = 0;
	int leng_s2 = 0;
	int total_leng = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[leng_s1] != '\0')
	{
		leng_s1++;
	}
	while (s2[leng_s2] != '\0')
	{
	leng_s2++;
	}

	total_leng = leng_s1 + leng_s2 + 1;
	concatenated = (char *)malloc(total_leng * sizeof(char));

	if (concatenated == NULL)
	return (NULL);

	for (i = 0; i < leng_s1; i++)
	{
	concatenated[i] = s1[i];
	}
	for (i = 0; i < leng_s2; i++)
	{
	concatenated[i + leng_s1] = s2[i];
	}
	concatenated[total_leng - 1] = '\0';

	return (concatenated);
}
