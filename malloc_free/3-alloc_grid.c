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
	int **out_grid;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	out_grid = (int **)malloc(height * sizeof(int *));
	if (out_grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		out_grid[i] = (int *)malloc(sizeof(int) * width);
		if (out_grid[i] == NULL)
		{
			free(out_grid);
			for (j = 0; j <= i; j++)
				free(out_grid[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			out_grid[i][j] = 0;
		}
	}

	return (out_grid);
}
