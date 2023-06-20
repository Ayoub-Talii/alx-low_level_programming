#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: int to check
 *
 * Return: the absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
