#include "main.h"

/**
 * _islower - checks if the char is lowercase
 *
 * @c: checks inputs
 *
 * Return: 0 if c is lowercare, or 1 if c if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
