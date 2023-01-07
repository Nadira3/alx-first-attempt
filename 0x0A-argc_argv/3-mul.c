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
	long int mul = 1;

	if (argc == 1)
	{
		printf("Error");
		printf("\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%ld\n", mul);
	}
	return (0);
}
