#include <stdio.h>
/**
 * main - entry point of program. prints 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int sum;
	int count = 0;

	printf("%lu, %lu, ", i, j);
	while (count < 96)
	{
		sum = i + j;
		if (count != 95)
		{
			printf("%lu, ", sum);
		}
		else
			printf("%lu\n", sum);
		i = j;
		j = sum;
		count++;
	}
	return (0);
}
