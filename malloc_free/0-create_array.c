#include "main.h"
#include <stdlib.h>
/**
 * create_array - array
 * @size: taille
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
char *t;
unsigned int i;

if (size <= 0)
{
	return (NULL);
}
t = malloc(sizeof(char) * size);
	if (t == NULL)
	{
		return (NULL);
	}
for (i = 0; i < size; i++)
{
	t[i] = c;
}
return (t);
}
