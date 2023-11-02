#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j, lenght;
	char *inicio, *final, temp;

	lenght = 0;
	inicio = s;
	final = s;

	while (*(s + lenght) != 0)
	{
		lenght++;
	}

	for (j = 0; j < lenght - 1; j++)
	{
		final++;
	}

	for (i = 0; i < lenght / 2; i++)
	{
		temp = *final;
		*final = *inicio;
		*inicio = temp;

		inicio++;
		final--;
	}
}
