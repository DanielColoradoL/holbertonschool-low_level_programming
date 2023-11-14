#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	int size;
	int i;
	char *str_copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != 0; size++)

	str_copy = malloc(size + 1);

	if (str_copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size + 1); i++)
	{
		str_copy[i] = str[i];
	}

	return (str_copy);
}
