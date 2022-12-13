#include "main.h"
/**
 * main - entry point
 *
 * Return:Always 0
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
    }
}
