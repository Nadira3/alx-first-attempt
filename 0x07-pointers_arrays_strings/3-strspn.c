#include "main.h"
/**
 * _strlen - finds the length of string
 *
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * _strspn - finds the length of a substring
 *
 * @s: substring
 * @accept: string
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;
	unsigned int *p = &n;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; j < _strlen(accept); j++)
			{
				if (s[i] != accept[j])
				{
					break;
				}
				else
					*p += 1;
			}
		}
	}
	return (n);
}

