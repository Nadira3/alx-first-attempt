#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
