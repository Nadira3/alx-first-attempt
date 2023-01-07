#include "main.h"
/**
 * _isalpha - checks whether the input is an alphabet
 *
 * @c: stores value of the input
 * Return: 1 || 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
