#include "main.h"
/**
 * squaref - forms the square
 *
 * @size: stores the integer value for square size
*/
void squaref(int size)
{
	int i;

	for (i = 0; i < size; i++)
		_putchar('#');
}
/**
 * print_square - prints the size of a square
 *
 * @size: stores the integer value for square size
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			continue;
		}
		squaref(size);
		_putchar('\n');
	}
	if ((i != size) || (size == 0))
	{
		_putchar('\n');
	}
}
