#include "main.h"
/**
 * alloc_grid - creer matrix
 * @width: array
 * @height: taille de l'array
 * Return: int
 */
int **alloc_grid(int width, int height)
{
int **t, i, j;

if (width <= 0 || height <= 0)
	return (NULL);

t = malloc(sizeof(int *) * height);
if (t == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	t[i] = malloc(sizeof(int) * width);
	if (t[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(t[j]);
		}
		free(t);
	}
}

for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
		t[i][j] = 0;

return (t);
}
