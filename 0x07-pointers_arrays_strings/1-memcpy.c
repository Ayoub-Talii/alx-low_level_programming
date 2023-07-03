#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: var to paste n
 * @src: var to copy n from
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;

	return (dest);
}
