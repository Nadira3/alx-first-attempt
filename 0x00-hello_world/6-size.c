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
	printf("%zu\n", sizeof(intType));
	printf("%zu\n", sizeof(floatType));
	printf("%zu\n", sizeof(doubleType));
	printf("%zu\n", sizeof(charType));
	return (0);
}
