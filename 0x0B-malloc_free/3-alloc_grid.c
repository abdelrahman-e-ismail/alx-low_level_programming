#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers.
 * @width: the number of rows.
 * @height: the number of columns.
 * Return: pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
return (grid);
}
