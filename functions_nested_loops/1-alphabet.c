#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_alphabet - lettre minuscule
* Description: affiche les lettres minucules de la table ASCII
* Return:valeur 0
*/
void print_alphabet(void)
{
int c = 97;
while (c < 123)
{
_putchar(c);
c++;
}
_putchar('\n');
}
