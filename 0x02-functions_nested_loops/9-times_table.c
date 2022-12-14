#include "main.h"
#include <stdio.h>
/**
 * times_table - prints d nine timez table
 *
 * @n: stores value
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
		if (i == 9 && j == 9)
			continue;
                printf("%d", k);	
		_putchar(',');
		_putchar(' ');
		}
		_putchar('\n');


	}
}
