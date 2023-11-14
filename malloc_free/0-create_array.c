#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size + 1);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[size + 1] = 0;

	return (s);
}
