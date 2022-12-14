#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: stores the value of the number
 * Return: j
 */
int print_last_digit(int i)
{
	int j;

	j = (i % 10);

	if (j < 0)
	{
		j = (-1 * j);
	}
	_putchar(j + '0');
	return (j);
}
