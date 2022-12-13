#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: stores the value of the number
 * Return: i
 */
int print_last_digit(int i)
{
	int j;
	j = _putchar((i % 10) + '0');
	return (j);
}
