#include <stdio.h>
#include <ctype.h>
/**
* main - lettre minuscule
* Description: affiche les lettres minucules de la table ASCII
* Return:valeur 0
*/
int main(void)
{
int c = 97;
while (c < 123)
{
putchar(c);
c++;
}
return (0);
}
