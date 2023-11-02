#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int lenght = 0;
	int i = 0;

	while (*(str + lenght) != 0)
	{
		lenght++;
	}

	if (lenght % 2 == 0)
	{
		for (i = lenght / 2; i < lenght; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
	else
	{
		for (i = (lenght + 1) / 2; i < lenght; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
}
