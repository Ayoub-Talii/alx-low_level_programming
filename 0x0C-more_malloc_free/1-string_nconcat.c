#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0' && len2 < n)
	{
		len2++;
	}

	len = len1 + len2;
	ptr = (char *) malloc(len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';

	return (ptr);
}
