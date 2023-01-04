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
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string one
 * @accept: string two
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
