#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
