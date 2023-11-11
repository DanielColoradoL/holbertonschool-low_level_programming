#include "main.h"

/**
 * _isalpha - checks if input is a char
 * @c: the character to check
 * Return: 1 if c is alpha, 0 otherwise
 */

int _isalpha(int c)
{
	int outcome = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		outcome = 1;
	}
	return (outcome);
}
