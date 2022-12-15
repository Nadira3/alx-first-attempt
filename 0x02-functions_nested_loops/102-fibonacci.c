#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: 0
 */
int main(void)
{
	int i;
	
	for (i = 0; i <= 50; i++)
	{
		long int sum = 0;
		sum = sum + i;
		while (i > 0)
		{
		sum += sum;
		printf("%ld, ", sum);
		}
	}
	printf("\n");

	return (0);
}
