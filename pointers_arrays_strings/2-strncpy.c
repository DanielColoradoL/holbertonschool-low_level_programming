#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;
	int i = 0;

	while (src[src_len] != 0)
	{
		src_len++;
	}

	while (i <= src_len && i <= (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = 0;

	return (dest);
}
