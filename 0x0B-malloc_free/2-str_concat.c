#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	arr = malloc(sizeof(char) * (i + j + 1));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		arr[k] = s1[k];

	for (l = 0; l < j; l++)
		arr[k + l] = s2[l];

	arr[k + l] = '\0';

	return (arr);
}
