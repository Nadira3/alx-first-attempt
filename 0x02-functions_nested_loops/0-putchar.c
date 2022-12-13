#include "main.h"
/**
 * main - prints _putchar
 *
 * Return:Always 0
 */
int main(void)
{
	char name[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');

	return (0);
}
