#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int div_h = 0;
	int rem_h = 0;
	int div_m = 0;
	int rem_m = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < 24; i++)
	{
		div_h = i / 10;
		rem_h = i % 10;

		for (j = 0; j < 60; j++)
		{
			div_m = j / 10;
			rem_m = j % 10;
			_putchar(div_h + '0');
			_putchar(rem_h + '0');
			_putchar(':');
			_putchar(div_m + '0');
			_putchar(rem_m + '0');
			_putchar('\n');
		}
	}
}
