#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **result, a, b;

	if (width <=0 || height <= 0)
		return (NULL);
	result = malloc(sizeof(int *) * height);

	if (result == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		result[a] = malloc(sizeof(int) * width);

		if (result[a] == NULL)
		{
			for (; a >= 0; a--)
				free(result[a]);
			free(result);
			return(NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for(b = 0; b < width; b++)
			result[a][b] = 0;
	}

	return (result);
}
