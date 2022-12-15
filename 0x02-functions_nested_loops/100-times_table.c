#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times table
 *
 * @n: stores integer values
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n == 0)
		printf("%d\n", n);
	if (n > 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int k = i * j;

			if (j > 0 && j != n)
			{
				if (k <= 9)
					printf("   %d,", k);
				else if (k > 9 && k <= 99)
					printf("  %d,", k);
				else
					printf(" %d,", k);
			}
			else if (j == 0)
				printf("%d,", k);
			else
			{
				if (k <= 9)
					printf("   %d", k);
				else if (k > 9 && k <= 99)
					printf("  %d", k);
				else
					printf(" %d", k);
			}
		}
		printf("\n");
	}
	}
}
