#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: nb of how many times the char will be printed.
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
