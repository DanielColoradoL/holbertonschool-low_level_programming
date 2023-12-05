#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the number to be checked
 * @index: the index to check the bit
 * Return: the value of the bit pointed by index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 63)
		return (-1);

	tmp = n >> index;

	return (tmp & 1);
}

