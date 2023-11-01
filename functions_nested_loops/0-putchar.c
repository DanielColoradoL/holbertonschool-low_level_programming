#include "main.h"

/**
 * main - Entry point
 * Description: 'This program print _putchar'
 * Return: Always 0.
 */

int main(void)
{
	char *text = "_putchar.c";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(*(text + i));
	}
	_putchar('\n');

	return (0);
}
