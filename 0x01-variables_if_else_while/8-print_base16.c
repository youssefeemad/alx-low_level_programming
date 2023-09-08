#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	char lowerHex = 'a';

	while (lowerHex <= 'f')
	{
		putchar(lowerHex);
		lowerHex++;
	}

	putchar('\n');

	return (0);
}
