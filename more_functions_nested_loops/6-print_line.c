#include "main.h"
/**
* print_line - ligne
* @n: nombre
* Description (): ligne
* Return: valeur 0
*/
void print_line(int n)
{
for (int i = 0; i <= n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}
