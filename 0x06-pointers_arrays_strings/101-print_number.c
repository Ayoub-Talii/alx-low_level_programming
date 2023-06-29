#include "main.h"

/**
 * print_number - prints an integer.
 * @n: int to print
 */

void print_number(int n)
{
	unsigned int nb;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	nb = n;
	if (nb / 10 != 0)
	{
		print_number(nb / 10);
	}
	_putchar((nb % 10) + '0');
}
