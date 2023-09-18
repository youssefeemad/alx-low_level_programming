#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	long int num = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
		i++;
	}

	num *= sign;

	if (num > INT_MAX)
		return (INT_MAX);
	if (num < INT_MIN)
		return (INT_MIN);

	return ((int)num);
}
