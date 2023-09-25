#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring to find
 *
 * Return: pointer to the beginning of located substring in haystack,
 *         or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
