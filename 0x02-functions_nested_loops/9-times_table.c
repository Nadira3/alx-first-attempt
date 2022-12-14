#include "main.h"
#include <stdio.h>
/**
 * times_table - prints d nine timez table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int k = i * j;

			printf("%d", k);
			if (j != 9)
			printf(", ");
		}
		printf("\n");


	}
}
