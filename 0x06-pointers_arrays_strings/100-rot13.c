#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to encode.
 * Return: s
 */

char *rot13(char *s)
{
	char *str = s;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
	}
	return (str);
}
