#include <stdio.h>
#include "6-abs.c"
#include "main.h"
/**
* print_last_digit - unite
* @c: caracteres
* Description (): return l'unite
* Return:valeur 0
*/
int print_last_digit(int c)
{
_putchar('0' + _abs(c % 10));
return (_abs(c % 10));
}
