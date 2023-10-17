#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Hexadecimal
 * Description: 'all the numbers of base 16 in lowercase'
 * Return: Always 0.
 */
int main(void)
{
	char hex = 48;
	int ascii_dif;

	int i;
	for (i = 0; i < 16; i++)
	{
		if (i > 9)
		{
			ascii_dif = 39 + i;
			putchar((hex + ascii_dif));
		}
		else
		{
			putchar((hex + i));
		}
	}

	putchar(10);

	return (0);
}
