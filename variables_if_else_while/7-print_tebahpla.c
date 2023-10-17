#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints lower case alphabet lowercased finishing w new line'
 * Return: Always 0.
 */
int main(void)
{
	char abc = 'a';

	for (int i = 25; i > -1; i--)
	{
		putchar((abc + i));
	}
	putchar(10);

	return (0);
}
