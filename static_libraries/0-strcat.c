#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
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

	for (i = 0; i <= lenght_src; i++)
	{
		*(dest + lenght_dest + i) = *(src + i);
	}
	*(dest + lenght_dest + lenght_src) = 0;

	return (dest);
}
