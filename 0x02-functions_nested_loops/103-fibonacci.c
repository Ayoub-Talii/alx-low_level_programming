#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fib1, fib2, fib3, sum;

	fib1 = 1;
	fib2 = 2;
	sum = 0;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("%d\n", sum);

	return (0);
}
