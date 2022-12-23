#include "main.h"
/**
 * reverse_array - reverses the content of any array
 *
 * @a: array
 * @n: stores integer value
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
