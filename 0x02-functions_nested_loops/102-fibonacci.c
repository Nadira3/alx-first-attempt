#include <stdio.h>
/**
 * fibonacci - prints fibonacci numbers
 *
 * @n: stores integer value
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		m = -m;
	}

	if (m / 10)
		print_number(m / 10);
	putchar(m % 10 + '0');
}

void fibonacci(int n)
{
	int a = 0;
	int b = 1;
	int i;

	for (i = 1; i <= n; i++)
	{
		unsigned long int c = a + b;
		
		if (i != n)
		{
			print_number(c);
			printf(", ");
		}
		else
			print_number(c);

		a = b;
		b = c;
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
