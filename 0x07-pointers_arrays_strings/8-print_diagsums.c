#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: int
 * @size: int
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int R_sum = 0, L_sum = 0, i;

	for (i = 0; i < size; i++)
	{
		L_sum += a[i * size + i];
		R_sum += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", L_sum, R_sum);
}
