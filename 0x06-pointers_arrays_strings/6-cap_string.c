#include "main.h"
/**
 * cap_string- capitalizes the first letter of each word in a string
 *
 * @s: string
 * Return: character
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122 && s[i - 1] == ' ')
			s[i] -= 32;
		else if (s[i] >= 97 && s[i] <= 122 && s[i - 1] == '.')
			s[i] -= 32;
		else if (s[i] >= 97 && s[i] <= 122 && s[i - 1] == '\n')
			s[i] -= 32;
		else if (s[i] >= 97 && s[i] <= 122 && s[i - 1] == '\t')
			s[i] -= 32;
	}
	return (s);
}
