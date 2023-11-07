#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int f = n - 1;
	int tmp = 0;

	for (i = 0; i < (n + 1) / 2; i++, f--)
	{
		tmp = a[f];
		a[f] = a[i];
		a[i] = tmp;
	}
}
