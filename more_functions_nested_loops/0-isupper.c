#include "main.h"
/**
* _isupper - minuscule ou majuscule
* @c: compare les caracteres
* Description (): ruturn 1 si c'est en minuscule sinon 0
* Return:valeur 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
