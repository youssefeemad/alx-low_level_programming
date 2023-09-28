#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	while(s[0] != '\0')
	{
		_putchar(s[0]);
		s++;
	}
	return _puts_recursion(*s);
}