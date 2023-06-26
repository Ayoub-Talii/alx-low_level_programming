#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1, num = 0, n;
	int MAX_INT = 2147483647, MIN_INT = -2147483648;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			n = *s - '0';

			if (num > (MAX_INT - n) / 10)
			{
				if (sign == 1)
					return (MAX_INT);
				else
					return (MIN_INT);
			}
			num = num * 10 + n;
		}
		else if (num != 0)
			break;

		s++;
	}
	return (num * sign);
}
