#include "main.h"
#include "2-strlen.c"
/**
* reverse_array - check the code for
* @a: pointeur
* @n: nombre
* Description: a
* Return: 0.
*/
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0; i < n / 2; i++)
{
	j = a[i];
	a[i] = a[(n - 1) - i];
	a[(n - 1) - i] = j;
}
}
