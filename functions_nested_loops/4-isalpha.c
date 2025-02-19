#include <stdio.h>
/**
* _isalpha - return 1 maj et num
* @c: caractere
* Description ():return 1 pour les numeros et les majuscules et 0 pour le reste
* Return:valeur 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
