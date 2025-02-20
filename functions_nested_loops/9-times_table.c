#include <stdio.h>
/**
* times_table - table de multiplication
* Description:affiche les tables de 0 a 9
* Return:valeur 0
*/
void times_table(void)
{
int c;
int m = -1;
while (m < 9)
{
m++;
c = 0;
while (c < 10)
{
if (c *m < 10)
{
putchar(' ');
putchar('0' + c *m);
c++;
}
else
{
putchar('0' + c *m / 10);
putchar('0' + c *m % 10);
c++;
}
if (c < 10)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
}
