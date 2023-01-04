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
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char **p = &s;

	for (i = 0; i < _strlen(s); i++)
	{
		for (j = 0; j < _strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				*p = s + i;
				break;
			}

		}
	}
	return (*p);
}

