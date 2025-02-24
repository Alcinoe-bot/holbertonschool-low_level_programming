#include "main.h"
/**
* _isdigit - minuscule ou majuscule
* @c: 0 a 9
* Description (): ruturn 1 si c'est en minuscule sinon 0
* Return:valeur 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
