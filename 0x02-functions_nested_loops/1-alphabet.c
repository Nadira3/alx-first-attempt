#include "main.h"
/**
 * print_alphabet - prints the alphabets
 *
 * Return:void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
