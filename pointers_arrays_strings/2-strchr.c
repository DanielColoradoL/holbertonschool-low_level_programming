#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int flag = 0;
	char *outcome;

	while (*s != 0)
	{
		if (*s == c)
		{
			flag = 1;
			break;
		}
		s++;
	}

	if (flag == 1 || c == '\0')
	{
		outcome = s;
	}
	else
	{
		outcome = NULL;
	}

	return (outcome);
}
