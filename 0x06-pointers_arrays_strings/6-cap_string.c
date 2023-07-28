#include <ctype.h>

/**
 * cap_string - capitalizes all words in a string based on separators
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = toupper(str[i]);
	}

	while (str[i] != '\0')
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
		str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
	{
	if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
		str[i + 1] = toupper(str[i + 1]);
		}
	}
	i++;
	}

	return (str);
}
