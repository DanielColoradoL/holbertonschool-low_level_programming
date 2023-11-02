#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num = 0;
	int div = 0;
	int rem = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			num = i * j;
			div = num / 10;
			rem = num % 10;

			if (j != 0)
			{
			_putchar(' ');
			}

			if (div != 0)
			{
				_putchar(div + '0');
			}

			else if (j != 0)
			{
				_putchar(' ');
			}

			_putchar(rem + '0');

			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
