#include <stdio.h>
#include <ctype.h>
/**
* main - lettre minuscule  et majsucule
* Description: affiche les lettres minucules et minuscule de la table ASCII
* Return:valeur 0
*/
int main(void)
{
int c = 97;
int C = 65;
while (c < 123)
{
putchar(c);
c++;
}
while (C < 91)
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
