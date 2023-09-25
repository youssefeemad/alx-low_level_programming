#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diag1, diag2);
}
