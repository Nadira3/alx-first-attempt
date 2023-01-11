#include <stdlib.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string variable
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
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
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * Return: characters
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * str_concat - concatenates string
 *
 * @s1: first string
 * @s2: second string
 * Return: character
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int size;

	size = _strlen(s1) + _strlen(s2) + 1;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		arr = _strcpy(arr, s1);
		return (arr);
	}
	if (s2 == NULL)
	{
		arr = _strcpy(arr, s2);
		return (arr);
	}
	arr = _strcpy(arr, s1);
	arr = _strcat(arr, s2);
	return (arr);
}
