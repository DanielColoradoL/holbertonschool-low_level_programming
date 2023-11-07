#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */

char *leet(char *s)
{
	char letters[10] =  {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[10] =  {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int j = 0;

	while (s[i] != 0)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
		}
		i++;
	}
	return (s);
}
