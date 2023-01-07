#include "main.h"
#include <stdio.h>
/**
 * main - entry point of the program
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int n = argc - 1;

	printf("%d\n", n);
	return (0);
}
