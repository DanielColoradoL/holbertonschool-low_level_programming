#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - checks value in array
 * @array: the array to check
 * @size: the size of the array
 * @value: value to look for
 * Return: index if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

