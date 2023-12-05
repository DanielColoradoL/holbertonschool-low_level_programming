#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int z;
	unsigned int count = 0, i;

	z = n ^ m;

	for (i = 0; i < 64; i++)
	{
		if (z >> i & 1)
			count++;
	}
	return (count);
}
