#include "main.h"
/**
* print_line - ligne
* @n: nombre
* Description (): ligne
* Return: valeur 0
*/
void print_line(int n)
{
int i = 0;
while (i <= n)
{
if (n < 1)
{
_putchar('\n');
i++;
}
_putchar('_');
i++;
}
_putchar('\n');
}
