#include "main.h"
/**
 * malloc_checked - malloc
 * @b: int
 * Return: pointeur
 */
void *malloc_checked(unsigned int b)
{
void *t;

t = malloc(b);
if (t == NULL)
	exit(98);

return (t);
}
