#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int needle_len = 0;

	while (needle[needle_len] != 0)
	{
		needle_len++;
	}

	for (i = 0; haystack[i] != 0; i++)
	{
		if (needle[j] == 0)
		{
			break;
		}
		else if (needle[j] == haystack[i])
		{
			j++;
		}
		else
		{
			j = 0;
		}
	}

		if (needle_len == j)
		{
			for (k = 0; k < (i - j); k++)
			{
			haystack++;
			}

			return (haystack);
		}
		else
		{
			return (NULL);
		}
}
