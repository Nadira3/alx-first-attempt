#include <stdio.h>
/**
 * main - the entry point of the program
 *
 * Return:This function returns the character
 * written on the stdout as an unsigned char.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
