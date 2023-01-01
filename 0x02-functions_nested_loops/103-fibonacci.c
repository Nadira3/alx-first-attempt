#include <stdio.h>
/**
 * main - prints sum of even numbers in fibonacci series less than 4M
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int t1 = 0, t2 = 1, sum, result;

	while (1)
	{
		if (sum > 4000000)
		{
			break;
		}
		sum = t1 + t2;
		if (sum % 2 == 0)
		{
			result += sum;
		}
		t1 = t2;
		t2 = sum;
	}
	printf("%lu", result);
	return (0);
}
