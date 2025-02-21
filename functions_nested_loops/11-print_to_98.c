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
int m = -1;
n = _abs(n);
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
if (n == m && n < 10)
{
_putchar('0' + n);
}
else if (n == m && n < 100)
{
_putchar('0' + m / 10);
_putchar('0' + m % 10);
}
else if (n == m && n < 200)
{
_putchar('0' + m / 100);
_putchar('0' + m / 10);
_putchar('0' + m % 10);
}
}
