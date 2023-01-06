#include "main.h"
/**
 * factorial - finds the factorial of a number
 *
 * @n: number
 * Return: integer
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m / 10)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}
int factorial(int n)
{
	int result;

	if (n <= 0)
		result = 1;
	else
		result = n * factorial(n -1);
	print_number(result);
	
	return (0);
	
}
