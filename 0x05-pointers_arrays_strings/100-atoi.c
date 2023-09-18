#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string, or INT_MAX/INT_MIN on overflow.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			if (num > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			num = num * 10 + digit;
			started = 1;
		}
		else if (started)
		{
			break;
		}
		s++;
	}

	return (num * sign);
}
