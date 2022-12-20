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
 * rev_string - reverses a string
 * @s: string variable
 */
void rev_string(char *s)
{
	int i = 0;
	int len;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
