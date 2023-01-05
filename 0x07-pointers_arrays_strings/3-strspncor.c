#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to array
 * @c: character
 * Return: pointer to the first occurrence
 * of the character c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	char **p = &s;
	char *q = &c;

	while (**p && **p != *q)
		++*p;
	if (*q == **p)
		return ((char *)(*p));
	else
		return ((char *)(NULL));
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
	unsigned int n = 0;

	if ((s == NULL) || (accept == NULL))
		return (n);
	while (*s && _strchr(accept, *s++))
	{
		n++;
	}
	return (n);
}
