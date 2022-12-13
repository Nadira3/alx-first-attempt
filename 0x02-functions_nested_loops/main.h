#include <unistd.h>
/**
 * this file contains a list of all my function prototypes
 */

int _putchar(char);
int _putchar(char c)
{
    return (write(1, &c, 1));
}

void print_alphabet(void);
void print_alphabet(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
        _putchar(ch);
}

void print_alphabet_x10(void);
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
