#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 *
 * @size: size of array
 * @c: character inital
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	arr[0] = c;

	if (arr == NULL)
		return (NULL);
	else
		return (arr);
}
