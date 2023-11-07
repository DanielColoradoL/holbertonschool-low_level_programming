#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenght_src = 0;
	int lenght_dest = 0;
	int i = 0;

	while (*(src + lenght_src) != 0)
	{
		lenght_src++;
	}

	while (*(dest + lenght_dest) != 0)
	{
		lenght_dest++;
	}

	if (lenght_src < n)
	{
		for (i = 0; i <= lenght_src; i++)
		{
			*(dest + lenght_dest + i) = *(src + i);
		}
		*(dest + lenght_dest + lenght_src) = 0;
	}
	else
	{
			for (i = 0; i <= n; i++)
		{
			*(dest + lenght_dest + i) = *(src + i);
		}
		*(dest + lenght_dest + n) = 0;
	}
	return (dest);
}

