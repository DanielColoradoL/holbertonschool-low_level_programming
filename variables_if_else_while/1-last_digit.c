#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Checks last digit of a number and pass it trough and if'
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %i and is greater than 5\n", n);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %i and is 0\n", n);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %i and is less than 6 and not 0\n", n);
	}

	return (0);
}
