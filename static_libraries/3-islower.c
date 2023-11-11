#include "main.h"

/**
 * _islower - Function
 * @c: input to check
 * Description: 'returns 1 if input is lower key'
 * Return: Always 0.
 */

int _islower(int c)
{
	int outcome = 0;

	if (c >= 'a' && c <= 'z')
	{
		outcome = 1;
	}
	return (outcome);
}
