#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **ptr;
	unsigned int c, h, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = h = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			h++;
	}
	ptr = malloc((h + 1) * sizeof(char *));
	if (ptr == NULL || h == 0)
	{
		free(ptr);
		return (NULL);
	}
	for (i = k = 0; i < h; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				ptr[i] = malloc((c - k + 2) * sizeof(char));
				if (ptr[i] == NULL)
				{
					ch_free_grid(ptr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			ptr[i][j] = str[k];
		ptr[i][j] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}
