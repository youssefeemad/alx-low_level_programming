#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int c, i, j, k;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	ptr = malloc((c + 1) * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			ptr[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			ptr[k] = av[i][j];
	}
	ptr[k] = '\0';

	return (ptr);
}
