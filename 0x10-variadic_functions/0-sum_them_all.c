#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	int i = n, sum = 0;

	if (n == 0)
		return (0);
	va_start(ar, n);
	while (i--)
		sum += va_arg(ar, int);
	va_end(ar);
	return (sum);
}
