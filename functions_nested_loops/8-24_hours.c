#include <stdio.h>
#include "main.h"
/**
* jack_bauer - heure
* Description (): affiche l'heure
* Return:valeur 0
*/
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar('\n');
}
}
}
