#include "main.h"
/**
 * space - prints a space
 *
 * @n: stores integer value
 */

void space(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(' ');
}
/**
 * print_diagonal - prints a diagonal line
 *
 * @n: stores integer value
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		space(i);
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
