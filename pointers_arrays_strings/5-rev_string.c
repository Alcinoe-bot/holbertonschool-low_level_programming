#include "main.h"
#include "2-strlen.c"
/**
* rev_string - reverse
* @s: string
* Description (): print un mot en reverse
* Return:valeur 0
*/
void rev_string(char *s)
{
int i;
char l;
for (i = _strlen(s) / 2 ; i < _strlen(s); i++)
{
l = s[i];
s[i] = s[_strlen(s) - 1 - i];
s[_strlen(s) - 1 - i] = l;
}
}
