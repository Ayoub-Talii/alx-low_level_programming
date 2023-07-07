#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks for digits
 * @c: char to check
 * Return: c
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!is_digit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
