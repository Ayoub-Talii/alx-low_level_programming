#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 15)
	{
		if (n < 10)
			putchar('0' + n);
		else
			putchar('a' + n - 10);

		n++;
	}

	putchar('\n');

	return (0);
}
