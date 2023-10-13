#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ar;

	if (!n)
	{
		printf ("\n");
		return;
	}
	va_start(ar,n);
	for (i = 0 ; i < n ; i++)
	{
		printf ("%d%s",va_arg(ar ,int), 
		(i < n - 1) ? (separator ? separator : "") : "\n");
	}
	va_end(ar);
}
