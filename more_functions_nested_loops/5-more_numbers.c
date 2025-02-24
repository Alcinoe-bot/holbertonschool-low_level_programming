#include "main.h"
/**
* more_numbers - 0 a 14 10x
* Description (): nombre de 0 a 14 10x
* Return: valeur 0
*/
void more_numbers(void)
{
int c = 0;
while (c < 11)
{
int i = 0;
c++;
while (i < 14)
{
if (i / 10 == 1)
{
_putchar('0' + i / 10);
i++;
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
}
}
