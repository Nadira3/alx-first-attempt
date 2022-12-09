#include<stdio.h>
/**
 * main - Entry point, prints Programming is like building
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
