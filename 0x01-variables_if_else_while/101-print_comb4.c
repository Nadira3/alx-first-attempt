#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - entry point of the program
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10; c++)
		{
				if (a == b)
			{
				continue;
			}
				if (a > b)
			{
				continue;
			}
				if (a > c)
				continue;
				if (b > c)
				continue;
				if (b == c)
				continue;
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				if (a == 7 && b == 8 && c == 9)
			{
				continue;
			}
				putchar(',');
				putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}
