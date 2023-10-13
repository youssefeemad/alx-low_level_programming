#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ar;

	if (!n)
	{
		printf ("nil\n");
		return;
	}
	va_start(ar,n);
	for (i = 0 ; i < n ; i++)
	{
		printf ("%s%s",va_arg(ar ,char *), 
		(i < n - 1) ? (separator ? separator : "") : "\n");
	}
	va_end(ar);
}
