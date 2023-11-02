#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	for (int i = _strlen(s); i > -1; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
