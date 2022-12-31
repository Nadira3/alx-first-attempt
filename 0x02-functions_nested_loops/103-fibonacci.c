#include <stdio.h>
/**
 * main - entry point of program. prints fibonacci numbers less than 4M
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

	while (count < 48)
	{
		sum = i + j;
		if (sum >= 4000000)
		{
			break;
		}
		if (sum < 3500000)
			printf("%lu, ", sum);
		else
			printf("%lu", sum);
		i = j;
		j = sum;
		count++;
	}
	return (0);
}

