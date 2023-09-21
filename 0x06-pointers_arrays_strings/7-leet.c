#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string str.
 */
char *leet(char *s)
{
	char *result = s;
	char leetMap[256] = {0};

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (leetMap[s[i]] != 0)
			result[i] = leetMap[s[i]];
	}

	return (result);
}
