#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argv size
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv = argv;
	return (0);
}
