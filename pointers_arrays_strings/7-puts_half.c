#include "main.h"
#include "2-strlen.c"
/**
* puts_half - nombres paires
* @str: string
* Description (): moitier
* Return:valeur 0
*/
void puts_half(char *str)
{
int i;
for (i = (_strlen(str) + 1) / 2; i < _strlen(str); i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
