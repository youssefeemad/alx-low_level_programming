#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; ++i)
			++len1;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; ++i)
			++len2;
	}
	if (n >= len2)
		n = len2;
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; ++i)
		s[i] = s1[i];
	for (j = 0; j < n; ++j, ++i)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
