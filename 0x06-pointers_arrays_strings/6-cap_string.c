#include "main.h"
/**
 * cap_string: capitalizes the firat letter of each word in a string
 *
 * @s: string
 * Return: character
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i - 1] = ' '))
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
		}
	}
	return (s);
}
