#include <stdio.h>
/**
* _islower - minuscule ou majuscule
* Description: ruturn 1 si c'est en minuscule sinon 0
* Return:valeur 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
