#include "main.h"
/**
 * _memcpy - copies value from src to dest
 * @src: location of byte to be copied
 * @n: value of integer size
 * @dest: destination
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char **p = &dest;
	char **q = &src;

	for (i = 0; i < n; i++)
	{
		*(*p + i) = *(*q + i);
	}
	return (*p);
}
