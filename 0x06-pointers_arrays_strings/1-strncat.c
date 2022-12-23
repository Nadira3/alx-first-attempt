#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * Return: characters
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		if (j < n)
			dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
