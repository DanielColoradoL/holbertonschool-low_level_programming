#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *output;
	int i;
	int total_size = 0;

	if (min > max)
		return (NULL);

	total_size = (max - min) + 1;
	output = malloc(sizeof(int) * total_size);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
	{
		output[i] = min + i;
	}

	return (output);
}
