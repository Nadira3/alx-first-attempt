#include <stdio.h>
#include <math.h>
/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			if ((a / 10) > (b / 10))
			continue;

			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
