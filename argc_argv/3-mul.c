#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num_1;
	int num_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = _atoi(argv[1]);
	num_2 = _atoi(argv[2]);

	printf("%i\n", num_1 * num_2);

	return (0);
}

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
	int digit = 0;

	while (*(s + len) != 0)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (*(s + i) == '-')
		{
			sign = -sign;
		}

		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			digit = (*(s + i) - 48);
			if (sign == -1)
			{
				digit = -digit;
			}

			current_value = current_value * 10 + digit;

			if (*(s + i + 1) < 48 || *(s + i + 1) > 57)
			{
				break;
			}
		}
	}
	outcome = current_value;
	return (outcome);
}

