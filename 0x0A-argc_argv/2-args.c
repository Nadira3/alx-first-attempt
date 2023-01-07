#include "main.h"
#include <stdio.h>
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

	if (argc == 1)
		printf("%s\n", argv[0]);
	else
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
