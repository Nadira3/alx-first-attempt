#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer 1
 * @to: pointer 2
 * Return: void
 */
void set_string(char **s, char *to)
{
	char ***p = &s;
	char **q = &to;

	**p = *q;
}
