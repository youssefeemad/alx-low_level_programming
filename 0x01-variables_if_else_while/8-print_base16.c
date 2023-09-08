#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = '0';
	char lowerHex = 'a';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	while (lowerHex <= 'f')
	{
		putchar(lowerHex);
		lowerHex++;
	}

	putchar('\n');

	return (0);
}
