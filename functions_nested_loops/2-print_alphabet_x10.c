#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_alphabet_x10 - alphabet x10
* Description: affiche les lettres minucules en x10 de la table ASCII
* Return:valeur 0
*/
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
int c = 97;
while (c < 123)
{
_putchar(c);
c++;
}
i++;
_putchar('\n');
}
}
