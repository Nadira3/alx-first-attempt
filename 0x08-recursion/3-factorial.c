#include "main.h"
/**
 * factorial - finds the factorial of a number
 *
 * @n: number
 * Return: integer
 */
int factorial(int n)
{
	int result;

	if (n == 0)
		result = 1;
	else if (n < 0)
		result = -1;
	else
		result = n * factorial(n -1);
	return (result);
	
}
