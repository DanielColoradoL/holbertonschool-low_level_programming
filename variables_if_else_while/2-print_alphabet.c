#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase'
 * Return: Always 0.
 */
int main(void)
{
	char abc = 'a';

	for (int i = 0; i < 26; i++)
	{
		putchar((abc + i));
	}
	putchar(10);

	return (0);
}
