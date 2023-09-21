#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string str.
 */
char *leet(char *str)
{
	char *ptr = s;
	char leet[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";

	while (*s)
	{
		for (int i = 0; leet[i]; i++)
		{
			if (*s == leet[i])
			{
				*s = leet_replacements[i];
				break;
			}
		}
 		s++;
	}

	return (ptr);
}
