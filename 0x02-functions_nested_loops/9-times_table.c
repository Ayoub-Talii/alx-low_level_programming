#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			p = m * n;
			if (m == 0)
			{
				_putchar(p + '0');
			}

			if (p < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			} else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
