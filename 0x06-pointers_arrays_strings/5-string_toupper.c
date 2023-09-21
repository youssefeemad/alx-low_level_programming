#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the modified string str.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;  // Convert to uppercase using ASCII values
		i++;
	}

	return (str);
}
