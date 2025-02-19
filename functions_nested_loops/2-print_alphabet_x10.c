#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_alphabet_x10 - lettre minuscule
* Description: affiche les lettres minucules de la table ASCII
* Return:valeur 0
*/
void print_alphabet_x10(void)
{
int c = 97;
int i = 0;
while (i < 10)
{
while (c < 123)
{
_putchar(c);
c++;
}
i++;
}
_putchar('\n');
}
