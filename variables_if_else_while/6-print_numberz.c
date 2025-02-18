#include <stdio.h>
#include <ctype.h>
/**
* main - nombre de 0 a 9
* Description: affiche tous les numeros de la table ASCII
* Return:valeur 0
*/
int main(void)
{
int c = 48;
while (c < 58)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
