#include <stdio.h>
#include <ctype.h>
/**
* main - 0 a 9
* Description:affiche les nombres de 0 a 9 avec des espaces avec la table ASCII
* Return:valeur 0
*/
int main(void)
{
int c = 48;
while (c < 58)
{
putchar(c);
c = c + 1;
if (c < 58)
{
putchar(44);
putchar(32);
}
else
{
putchar('\n');
}
}
return (0);
}
