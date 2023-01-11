#include "main.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: string variable
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
/**
 * _strdup - returns a pointer to a new character memory
 *
 * @str: string
 * Return: character
 */
char *_strdup(char *str)
{
	char *arr;
	int size = _strlen(str) + 1;

	if (str == NULL)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	arr = _strcpy(arr, str);
	return (arr);

}
