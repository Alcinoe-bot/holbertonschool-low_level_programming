#include <stdio.h>
#include <ctype.h>
/**
* main - base 16
* Description: affiche les nombres en base 16 avec la table ASCII
* Return:valeur 0
*/
int main(void)
{
int c = 48;
int C = 97;
while (c < 58)
{
putchar(c);
c++;
}
while (C < 103)
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
