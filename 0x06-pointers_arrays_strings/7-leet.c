#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @s: string
 * Return: character
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == 97 || s[i] == 65)
			_putchar(4 + '0');
		if (s[i] == 101 || s[i] == 69)
			_putchar(3 + '0');
		if (s[i] == 111 || s[i] == 79)
			_putchar(0 + '0');
		if (s[i] == 116 || s[i] == 84)
			_putchar(7 + '0');
		if (s[i] == 108 || s[i] == 76)
			_putchar(1 + '0');
	}
	return (s);
}
