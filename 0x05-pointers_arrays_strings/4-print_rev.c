#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string variable
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * print_rev - returns the length of a string
 * @s: string variable
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		if (*s != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
