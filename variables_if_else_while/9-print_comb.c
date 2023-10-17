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

	for (int i = 0; i < 10; i++)
	{
		putchar((ascii_num + i));
		putchar(44);
		putchar(32);
	}

	putchar(10);

	return (0);
}
