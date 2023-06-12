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
	int i, j;
	int **array = NULL;

	if (width <= 0 ||  height <= 0)
		return (NULL);

	array = (int **)malloc(width * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(height * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j++ < height; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
