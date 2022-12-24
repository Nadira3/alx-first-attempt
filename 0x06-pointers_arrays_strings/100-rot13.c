#include "main.h"
/**
 * rot13 - encodes a string using rot13
 *
 * @s: string
 * Return: character
 */
char *rot13(char *s)
{
	int i, j;
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = r[j];
				break;
			}
		}
	}
	return (s);
}
