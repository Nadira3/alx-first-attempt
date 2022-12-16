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
		unsigned int c = a + b;

		a = b;
		b = c;

		if (c < 0)
			c = -c;

		if (i != n)
			printf("%u, ", c);
		else
			printf("%u", c);
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
