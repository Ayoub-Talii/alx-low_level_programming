#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string to check
 * Return: s
 */

char *string_toupper(char *s)
{
	char *ss = s;

	while (*ss)
	{
		if (*ss >= 'a' && *ss <= 'z')
			*ss -= 'a' - 'A';
		ss++;
	}
	return (s);
}
