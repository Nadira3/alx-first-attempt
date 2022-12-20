#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string pointer
 */
void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	str -= (i / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
