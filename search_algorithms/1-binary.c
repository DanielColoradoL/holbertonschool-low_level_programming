#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - checks value in array
 * @array: the array to check
 * @size: the size of the array
 * @value: value to look for
 * Return: index if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid = 0, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = 0; left + i <= right; i++)
		{
			if (left + i < right)
				printf("%i, ", array[left + i]);
			else
				printf("%i\n", array[left + i]);
		}

		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
