#include "main.h"
/**
* print_array - check the code for
* @a: pointeur
* @n: nombre de nombre
* Description: affiche les valeurs d'un tableau
* Return: Always 0.
*/
void print_array(int *a, int n)
{
int i;
if (n < 1)
{
printf("\n");
}
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d", a[i]);
printf("\n");
}
else
{
printf("%d, ", a[i]);
}
}
}
