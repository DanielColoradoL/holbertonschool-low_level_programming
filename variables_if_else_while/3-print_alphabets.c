#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints all the letters finishing w new line'
 * Return: Always 0.
 */
int main(void)
{
	char abc = 'a';

	int i, j;
	for (i = 0; i < 26; i++)
	{
		putchar((abc + i));
	}

	abc = 'A';

	for (j = 0; j < 26; j++)
	{
		putchar((abc + j));
	}
	putchar(10);

	return (0);
}
