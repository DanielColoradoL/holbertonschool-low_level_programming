#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints all the letters excluding 'q'
 * and 'e' finish w new line'
 * Return: Always 0.
 */
int main(void)
{
	char abc = 'a';

	for (int i = 0; i < 26; i++)
	{
		if (abc + i == 'q' || abc + i == 'e')
		{
			continue;
		}
		putchar((abc + i));
	}
	putchar(10);

	return (0);
}
