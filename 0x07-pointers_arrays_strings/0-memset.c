#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string
 * @b: char to fill mem area
 * @n: bytes of the memory area
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ss = s;

	for (i = 0; i < n; i++)
	{
		ss[i] = b;
	}
	return (s);
}
