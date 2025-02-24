#include "main.h"
/**
* more_numbers - 0 a 14 10x
* Description (): nombre de 0 a 14 10x
* Return: valeur 0
*/
void more_numbers(void)
{
int i;
int j;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
