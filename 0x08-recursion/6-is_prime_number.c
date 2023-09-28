#include "main.h"

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 *		    otherwise return 0.
 * @n: The number to be checked.
 *
 * Return: 1 if the input integer is a prime number,
 *	   0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - Checks if a number is prime.
 * @n: The number to be checked.
 * @i: The number to check against n.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i == n / 2)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}