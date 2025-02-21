#include <stdio.h>
#include "6-abs.c"
#include "main.h"
/**
* print_to_98 - jusqu'a 98
* @n: nombre donner
* Description:affiche les nombres precedent de n
* Return:valeur 0
*/
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
