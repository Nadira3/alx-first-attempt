#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
