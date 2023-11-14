#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	int size_s1, size_s2, i;
	char *out_str;

	for (size_s1 = 0; s1[size_s1] != 0; size_s1++)
	for (size_s2 = 0; s2[size_s2] != 0; size_s2++)

	out_str = malloc(size_s1 + size_s2 + 1);

	if (out_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size_s1; i++)
	{
		out_str[i] = s1[i];
	}

	for (i = 0; i <= size_s2; i++)
	{
		out_str[size_s1 + i] = s2[i];
	}

	out_str[size_s1 + size_s2 + 1] = 0;
	return (out_str);
}
