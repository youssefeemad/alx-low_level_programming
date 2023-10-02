#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int product;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}