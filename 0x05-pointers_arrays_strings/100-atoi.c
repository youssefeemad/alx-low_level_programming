#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (num > INT_MAX / 10 ||
			(num == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		num = num * 10 + (*s - '0');
		s++;
	}

	return num * sign;
}
