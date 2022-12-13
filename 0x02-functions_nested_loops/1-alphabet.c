#include "main.h"
/**
 * main - prints the alphabets
 *
 * Return:Always 0
 */
int main(void)
{
	int c;
	print_alphabet(c);

	for(c = 'a'; c < 'z'; c++)
	{
		_putchar(c);
	}
}
