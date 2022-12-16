#include <stdio.h>
/**
 * prime - prints the prime factors of n
 *
 * @n: stores the integer value
 */
void prime(long int n)
{
	int i;

	for (i = 2; n > 1; i++)
	{
		int k;

		while (n % i == 0)
		{
			k = i;
			n = n / k;

			if (n == 1)
				printf("%d\n", k);
		}
	}
}
/**
 * main - entry of the program
 *
 * Return: 0
 */
int main(void)
{
	prime(612852475143);
	return (0);
}
