#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 * @str: A pointer to a string.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
