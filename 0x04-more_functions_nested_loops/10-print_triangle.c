#include "main.h"
/**
 * print_triangle - prints a triangle of n size
 *
 * @size: stores integer value for triangle size
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j + 1 >= size - i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
}
