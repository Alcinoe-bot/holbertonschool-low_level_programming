#include "main.h"
/**
* print_most_numbers - 2 et 4 exclu
* Description (): nombre de 0 a 9 sauf 2 et 4
* Return: valeur 0
*/
void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
i++;
}
else
{
i++;
}
}
_putchar('\n');
}
