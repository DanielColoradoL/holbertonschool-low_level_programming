#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0;
	unsigned int sum = 0, factor = 1;

	if (b == NULL)
		return (0);

	while (b[i] != 0)
		i++;
	i--;

	for (j = 0; j <= i; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}

	for (; i > 0; i--, factor *= 2)
	{
		if (b[i] == '1')
			sum = sum + factor;
	}
	if (b[i] == '1')
		sum = sum + factor;

	return (sum);
}
