#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int row = width;
	int col = height;
	int **out_grid;
	int i, j;

	if (row < 1 || col < 1)
		return (NULL);

	out_grid = (int **)malloc(col * sizeof(int *));
	if (out_grid == NULL)
		return (NULL);

	for (i = 0; i < row; i++)
	{
		out_grid[i] = (int *)malloc(sizeof(int) * row);
		for (j = 0; j < col; j++)
		{
			out_grid[i][j] = 0;
		}
	}

	return (out_grid);
}

