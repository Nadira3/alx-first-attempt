#include "main.h"
/**
 * _puts - returns the length of a string
 *
 * @str: string variable
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
	_putchar('\n');
}
