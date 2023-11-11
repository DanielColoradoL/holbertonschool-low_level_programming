#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int output = 0;

	if (c >= 'A' && c <= 'Z')
	{
		output = 1;
	}
	return (output);
}
