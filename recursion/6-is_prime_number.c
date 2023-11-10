#include "main.h"

int aux(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (aux(n, n - 1));
}

/**
 * aux - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int aux(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (i > 1 && n % i == 0)
	{
		return (0);
	}
	return (aux(n, i - 1));
}
