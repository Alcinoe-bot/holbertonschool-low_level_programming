#include <stdio.h>
#include <ctype.h>
/**
* main - lettre minuscule
* Description: affiche les lettres minucules de la table ASCII
* Return:valeur 0
*/
int main(void)
{
int c = 123;
while (c > 96)
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
