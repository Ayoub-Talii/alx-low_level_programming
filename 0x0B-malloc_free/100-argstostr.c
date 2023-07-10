#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all
 * the arguments of your program.
 * @ac: args count
 * @av: args vector
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	c = malloc((len + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			c[k++] = av[i][j];
		}
		c[k++] = '\n';
	}

	c[k] = '\0';

	return (c);
}
