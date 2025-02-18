#include <stdio.h>
#include <ctype.h>
/**
* main - alphabet sans e et q
* Description: affiche l'alphabet sans e et q dans la table ASCII
* Return:valeur 0
*/
int main(void)
{
int c = 97;
while (c < 123)
{
if (c == 101 || c == 113)
{
c++;
}
else
{
putchar(c);
c++;
}
}
putchar('\n');
return (0);
}
