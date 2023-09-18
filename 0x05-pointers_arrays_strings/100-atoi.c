#include <stdio.h>
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
	int i = 0;

	while (s[i] == ' ')
		i++;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (num > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		num = num * 10 + (s[i] - '0');
		i++;
	}

	return num * sign;
}
