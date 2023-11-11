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
	int j = 0;
	int count = 0;
	int flag = 0;

	while (s[i] != 0)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
				break;
			}
		}

		if (flag != 1)
		{
			break;
		}

		flag = 0;
		i++;
	}

	return (count);
}
