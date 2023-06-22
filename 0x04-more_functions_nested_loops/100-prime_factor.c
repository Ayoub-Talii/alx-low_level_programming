#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num;
	long factor, largest_factor;

	num = 612852475143;
	factor = 2;
	largest_factor = 0;

	while (num > 1)
	{
		if (num %  factor == 0)
		{
			num /= factor;
			largest_factor = factor;
			while (num % factor == 0)
			{
				num /= factor;
			}
		}
		factor++;
	}
	printf("%ld\n", largest_factor);

	return (0);
}
