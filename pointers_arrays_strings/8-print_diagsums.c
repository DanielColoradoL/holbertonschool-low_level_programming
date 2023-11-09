#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int rev_sum = 0;

	for (i = 0; i < (size * size); i = i + size + 1)
	{
		sum = sum + a[i];
	}

		for (j = 0; j < (size * size); j = j + size - 1)
	{
		if (j == 0 || j == (size * size) - 1)
		{
			continue;
		}
		rev_sum = rev_sum + a[j];
	}
	printf("%i, %i\n", sum, rev_sum);
}
