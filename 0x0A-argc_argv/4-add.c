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
	int add = 0;

	if (argc == 1)
		return (add);
	else if (argc == 2)
		return (atoi(argv[1]));
	else if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(*argv[i])))
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
				add += atoi(argv[i]);
		}
	}
	return (add);
}
