#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 *@n: stores values
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 99)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 97)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
			n--;
		}
	}
	else
		printf("%d", n);
	putchar('\n');
}
