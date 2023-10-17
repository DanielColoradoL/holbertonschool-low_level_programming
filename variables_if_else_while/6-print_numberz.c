#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints nums with ascii code finishing w new line'
 * Return: Always 0.
 */
int main(void)
{
	int abc = 48;

	int i;
	for (i = 0; i < 10; i++)
	{
		putchar((abc + i));
	}
	putchar(10);

	return (0);
}
