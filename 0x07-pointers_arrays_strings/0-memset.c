#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: the constant byte to fill with
 * @n: number of bytes to fill
 *
 * Description:
 * This function fills the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
