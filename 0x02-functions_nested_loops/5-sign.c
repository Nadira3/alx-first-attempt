#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: stores the value of the input
 * Return: 0 || 1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
