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
	int i;
	for (i = 0; i < n; i++)
	{	
		while (*src)
		{
			*dest = *src;
			src++;
			dest++;
		}
	}
	*dest = '\0';
	return (dest);
}
