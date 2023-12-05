#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n;
	int swap = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (; m >> swap > 0; swap++)
	{}

	swap--;
	for (; swap >= 0; swap--)
	{
		if ((n >> swap) & 1)
			printf("1");
		else
			printf("0");
	}
}

