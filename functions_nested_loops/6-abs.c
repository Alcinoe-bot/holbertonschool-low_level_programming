#include <stdio.h>
#include "main.h"
/**
* _abs - valeur absolue
* @c: caractere
* Description ():donne la valeur absolue
* Return:valeur 0
*/
int _abs(int c)
{
if (c < 0)
{
return (c * -1);
}
return (c);
}
