#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	unsigned int add = 0;

	if (argc == 1)
	{
		printf("%u\n", add);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(*argv[i])))
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			else
				add += atoi(argv[i]);
		}
		printf("%u\n", add);
	}
	if (isdigit(add))
		return (0);
	else
		return (1);
}
