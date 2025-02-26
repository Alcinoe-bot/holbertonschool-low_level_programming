#include "main.h"
#include "2-strlen.c"
/**
* _strcpy - copie string
* @src: pointeur
* @dest: pointeur
* Description: affiche les valeurs d'un tableau
* Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
int i;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
