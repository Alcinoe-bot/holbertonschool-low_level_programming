#include <stdio.h>
#include "main.h"
/**
* print_sign - +, - ou 0
* @c: caractere
* Description ():return 1 pour les num +, 0 pour 0 et -1 pour les num -
* Return:valeur 0
*/
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
