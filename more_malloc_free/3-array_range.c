#include "main.h"
/**
 * array_range - arrays
 * @min: int
 * @max: int
 * Return: int
 */
int *array_range(int min, int max)
{
int i, *t, len;

if (min > max)
	return (NULL);

len = 0;

for (i = min; i <= max; i++)
	len++;

t = malloc(sizeof(int) * len);

if (t == NULL)
	return (NULL);

i = 0;

while (min <= max)
{
	t[i] = min;
	i++;
	min++;
}
return (t);
}
