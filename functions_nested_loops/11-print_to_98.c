#include <stdio.h>
#include "main.h"
/**
* print_to_98 - jusqu'a 98
* @n: nombre donner
* Description:affiche les nombres precedent de n
* Return:valeur 0
*/
void print_to_98(int n)
{
int i = n;
if (i > 98)
{
for (int i = n; i > 98; i--)
{
if (i == 98)
{
printf("98\n");
printf("98\n");
}
else
{
printf("%d", i);
printf(", ");
}
}
}
else if (i < 99)
{
for (int i = n; i < 99; i++)
{
if (i == 98)
{
printf("98\n");
printf("98\n");
}
else
{
printf("%d", i);
printf(", ");
}
}
}
}
