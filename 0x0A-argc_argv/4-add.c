#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	long int add = 0;

	if (argc == 1)
	{
		printf("%ld\n", add);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%ld\n", add);
	}
	return (0);
}
