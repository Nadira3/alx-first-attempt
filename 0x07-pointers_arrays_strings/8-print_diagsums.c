#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 *
 * @a: array
 * @size: soze of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumx = 0, sumy = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumx += *a[i][i+j];
			if (i + j == size - 1)
				sumy += *a[i][j];
		}
	}
	printf("%d, %d", sumx, sumy);
}
