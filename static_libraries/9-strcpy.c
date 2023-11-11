#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len_w_null = 0;
	int i = 0;

	while (*(src + len_w_null) != 0)
	{
		len_w_null++;
	}
	len_w_null++;

	for (i = 0; i < len_w_null; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
