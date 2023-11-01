#include "main.h"

/**
 * print_alphabet - Function
 * Description: 'Prints the alphabet from a to z'
 */

void print_alphabet(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(letter + i);
	}
	_putchar('\n');
}
