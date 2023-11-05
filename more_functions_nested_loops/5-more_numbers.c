#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i;
	int j;
	int unit = 0;
	int dec = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			dec = i / 10;
			unit = i % 10;
			if (dec > 0)
			{
				_putchar(dec + 48);
			}
				_putchar(unit + 48);
		}
		_putchar('\n');
	}
}
