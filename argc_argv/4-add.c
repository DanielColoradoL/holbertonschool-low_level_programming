#include <stdio.h>
#include "main.h"

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int add = 0;
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i] != 0; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		add = _atoi(argv[i]);
		sum = sum + add;
	}

	printf("%i\n", sum);

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
