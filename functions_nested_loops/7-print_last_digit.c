#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @last_d: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int last_d)
{
	int outcome = 0;

	outcome = last_d % 10;

	if (outcome < 0)
	{
		outcome = outcome * -1;
	}

	_putchar('0' + outcome);

	return (outcome);
}
