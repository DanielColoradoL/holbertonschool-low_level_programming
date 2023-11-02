#include "main.h"

/**
 * print_alphabet_x10 - Funtcion
 * Description: 'prints the alphabet 10 times'
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(letter + i);
		}
	_putchar('\n');
	}
}
