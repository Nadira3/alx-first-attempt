#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * @c: stores the variable to be checked
 *
 * Return: 0 || 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
