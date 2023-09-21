#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string str.
 */
char *leet(char *str)
{
	int i = 0;
	char leet_map[] = "aAeEoOtTlL4433007711";

	while (str[i] != '\0')
	{
		int j = 0;
		while (leet_map[j] != '\0')
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_map[j + 1];
				break;
			}
			j += 2;
		}
		i++;
	}

	return (str);
}
