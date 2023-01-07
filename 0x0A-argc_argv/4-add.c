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
	int i;
	unsigned int add = 0;

	if (argc == 1)
		printf("%u\n", add);
	else if (argc == 2)
		printf("%u\n", atoi(argv[1]));
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
				add += atoi(argv[i]);
		}
		printf("%u\n", add);
	}
	return (0);
}
