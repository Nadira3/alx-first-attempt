#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string variable
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
		_putchar(str[i]);
	}
}
