#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char conditions[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};
	int x = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0, x = 0; j <= 13; j++)
			{
				if (s[i - 1] == conditions[j])
				{
					x = 1;
				}
			}
			if (x == 1)
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
