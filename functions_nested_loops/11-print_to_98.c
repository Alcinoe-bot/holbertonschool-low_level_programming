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
int m = -1;
while (m < n)
{
m++;
if (m == 0)
{
_putchar('0');
}
else if (m < 10)
{
_putchar(',');
_putchar(' ');
_putchar('0' + m);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + m / 10);
_putchar('0' + m % 10);
}
}
_putchar('\n');
_putchar(n);
}
