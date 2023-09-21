#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string str.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			 str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' ||
			 str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
			 str[i - 1] == '{' || str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;  // Convert to uppercase using ASCII values
		}
		i++;
	}

	return (str);
}
