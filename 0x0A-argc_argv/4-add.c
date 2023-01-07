#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point of the program
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	int i, num = 0;

	if (argc == 1)
		printf("%d\n", num);
	else if (argc == 2)
	{
		num = atoi(argv[1]);
		printf("%d\n", num);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(*argv[i])))
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
				num += atoi(argv[i]);
		}
		printf("%d\n", num);
	}
	return (0);
}
