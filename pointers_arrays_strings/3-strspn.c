#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int j = 0;

	while (s[i] != 0)
	{
		if (accept[j] == 0)
		{
			break;
		}
		else if (accept[j] == s[i])
		{
			j++;
		}
		else
		{
			j = 0;
		}
		i++;
	}

	if (s[i] == 0 && accept[j] != 0)
	{
		j = 0;
	}

	return (j);
}
