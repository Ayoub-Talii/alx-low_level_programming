#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: pointer
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;

	while (*s != '\0')
	{
		while (*temp != '\0')
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		temp = accept;
		s++;
	}
	return (NULL);
}
