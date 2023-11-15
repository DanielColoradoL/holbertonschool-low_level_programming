#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *outcome;
	char *test;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	outcome = malloc(size * nmemb);
	if (outcome == NULL)
		return (NULL);

	test = outcome;

	for (i = 0; i < (size * nmemb); i++)
	{
		test[i] = 0;
	}

	return (outcome);
}

