#include "main.h"
/**
 * print_rev - returns the length of a string
 *
 * @s: string variable
 */
int _strlen(char *s)
{
	int i = 0;
	
	while (*s != '0')
	{
		i++;
		s++;
	}
	return (i);
}
void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);

	for (i = len; i >= 0; i--)
	{
		if (*s != '0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
