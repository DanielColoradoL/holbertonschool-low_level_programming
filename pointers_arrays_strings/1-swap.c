#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 */

void swap_int(int *a, int *b)
{
	int a_val = *a;
	int b_val = *b;

	*a = b_val;
	*b = a_val;
}
