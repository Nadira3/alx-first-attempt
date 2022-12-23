#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: destination
 * @src: source
 * @n: stores integer values
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src && i < n)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
