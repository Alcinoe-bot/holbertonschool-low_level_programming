#include "main.h"
#include "2-strlen.c"
/**
* print_rev - reverse
* @s: string
* Description (): print un mot en reverse
* Return:valeur 0
*/
void print_rev(char *s)
{
int i;
for (i = _strlen(s) - 1; i >= 0; i--)
{
putchar(*(s + i));
}
_putchar('\n');
}
