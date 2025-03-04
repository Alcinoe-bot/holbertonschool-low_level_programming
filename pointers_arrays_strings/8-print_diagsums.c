#include "main.h"
/**
* print_diagsums - diagonal
* @a: pointeur
* @size: taille
*/

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[(i * size) + i];
		diag2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diag1, diag2);
}
