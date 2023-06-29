#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to encode.
 * Return: s
 */

char *leet(char *s)
{
	int i, len = 0;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char replacements[] = {'4', '3', '0', '7', '1'};

	while (s[len])
	{
		for (i = 0; i <= 4; i++)
		{
			if (s[len] == lower[i] || s[len] == upper[i])
				s[len] = replacements[i];
		}
		len++;
	}
	return (s);
}
