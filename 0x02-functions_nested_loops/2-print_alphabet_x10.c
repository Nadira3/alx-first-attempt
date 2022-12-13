#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
    char ch, i;
    for (i = 0; i < 10; i++)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            _putchar(ch);
        }
	_putchar('\n');
    }
}
