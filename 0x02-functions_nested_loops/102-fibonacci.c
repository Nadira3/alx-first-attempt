#include <stdio.h>
/**
 * fibonacci - prints fibonacci numbers
 *
 * @n: stores integer value
 */
void fibonacci(int n)
{
	int a = 0;
	int b = 1;
	int i;

	for (i = 1; i <= n; i++)
	{
		long int c = a + b;

		a = b;
		b = c;

		if (i != n)
			printf("%ld, ", c);
		else
			printf("%ld", c);
	}
}
/**
 * main - entry point of the program
 *
 * Return: 0
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
