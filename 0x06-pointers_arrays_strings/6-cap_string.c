#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string str.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* Capitalize the first letter of a word */
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
			 str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
			 str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
			 str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
			 str[i - 1] == '{' || str[i - 1] == '}') &&
			(str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32; /* Convert to uppercase */
		}
		i++;
	}

	return (str);
}
