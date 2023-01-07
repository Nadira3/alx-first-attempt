#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: char pointer
 * @n: value of integer size
 * @b: constant byte
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **p = &s;

	for (i = 0; i < n; i++)
	{
		*(*p + i) = b;
	}
	return (*p);
}
