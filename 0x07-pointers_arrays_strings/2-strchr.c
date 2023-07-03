#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @c: char
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
