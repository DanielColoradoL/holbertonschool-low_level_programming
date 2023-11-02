#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: the int to check
 * Return: the absolute value of int
 */

int _abs(int num)
{
	int outcome = 0;

	if (num < 0)
	{
		outcome = num * -1;
	}
	return (outcome);
}
