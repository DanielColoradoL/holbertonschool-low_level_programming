#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int len = 0;
	int sign = 1;
	int outcome = 0;
	int current_value = 0;
	int i = 0;

	while (*(s + len) != 0)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (*(s + i) == '-')
		{
			sign = sign * -1;
		}

		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			current_value = current_value * 10 + (*(s + i) - 48);

			if (*(s + i + 1) < 48 || *(s + i + 1) > 57)
			{
				break;
			}
		}

	}
	outcome = current_value * sign;
	return (outcome);
}
