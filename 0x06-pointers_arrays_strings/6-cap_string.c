#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string to capitalize
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int cap = 1, len = 0;

	while (s[len])
	{
		if (s[len] == ' ' || s[len] == '\t' || s[len] == '\n' ||
				s[len] == ',' || s[len] == ';' || s[len] == '.' ||
				s[len] == '!' || s[len] == '?' || s[len] == '"' ||
				s[len] == '(' || s[len] == ')' || s[len] == '{' || s[len] == '}')
		{
			cap = 1;
		}
		else
		{
			if (cap)
			{
				if (s[len] >= 'a' && s[len] <= 'z')
				{
					s[len] -= 32;
				}
				cap = 0;
			}
		}
		len++;
	}

	return (s);
}
