#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point of the program
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == b)
		{
			continue;
		}
			if (a > b)
		{
			continue;
		}
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a == 8 && b == 9)
		{
			continue;
		}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
