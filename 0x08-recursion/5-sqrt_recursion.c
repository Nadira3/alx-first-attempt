#include "main.h"
/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int result;

	if (n <= 1)
		result = 1;
	else if (n % 2 == 0)
		result = n / _sqrt_recursion(n / 2);
	else if (n % 3 == 0)
		result = n / _sqrt_recursion(n / 3);
	else if (n % 5 == 0)
		result = n / _sqrt_recursion(n / 5);
	else if (n % 7 == 0)
		result = n / _sqrt_recursion(n / 7);
	else
		result = -1;
	return (result);
}
