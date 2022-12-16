#include "main.h"
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
		_putchar('\\');
	}
	_putchar('\n');
}
