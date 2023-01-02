#include "main.h"
/**
 * s - char pointer
 * n - value of integer size
 * b - constant byte
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char** p = &s;

	for (i = 0; i < n; i++)
	{
		*s = b;
	}
	return (*p);
}
