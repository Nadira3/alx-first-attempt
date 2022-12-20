#include "main.h"
/**
 * is_number - check if it is a digit
 *
 * @n: number
 * Return: 0 || 1
 */
int is_number(unsigned int n)
{
	return (n >= '0' && n <= '9');
}
/**
 * _atoi - convert a string to an integer
 *
 * @s: string
 * Return: result
 */
int _atoi(char *s)
{
	unsigned int num, i;
	int sign;

	sign = 1;
	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_number(s[i]))
		{
			num = (s[i] - 48) + num * 10;
			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}		
	}
	return (num * sign);
}
