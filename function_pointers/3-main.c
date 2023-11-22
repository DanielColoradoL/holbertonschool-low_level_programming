#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, result;
	char ope;
	int (*type_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	ope = *argv[2];
	type_op = get_op_func(argv[2]);

	if (type_op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if (num_2 == 0 && (ope == '/' || ope == '%'))
	{
		printf("Error\n");
		return (100);
	}

	result = type_op(num_1, num_2);
	printf("%i\n", result);

	return (0);
}
