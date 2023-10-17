#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Hexadecimal
 * Description: 'prints all possible combinations of
 * single-digit numbers'
 * Return: Always 0.
 */
int main(void)
{
	int ascii_num = 48;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((ascii_num + i));
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
