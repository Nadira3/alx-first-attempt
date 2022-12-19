#include "main.h"
/**
 * swap_int - swaps variable values
 *
 * @a: first variable
 * @b: second variable
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
