#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array
 * @width: width
 * @height: heigh
 *
 * Return: pointer to the array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **array = NULL;

	array = (int **)malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(height * sizeof(int));
	}

	return (array);
}
