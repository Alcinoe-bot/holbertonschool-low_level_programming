#include "main.h"
#include "2-strlen.c"
/**
* _strncat - check the code for
* @s: pointeur
* Description: remplace
* Return: 0.
*/
char *leet(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{ 
if (s[i] != 'a' && s[i] != 'A' && s[i] != 'e' && s[i] != 'E' && s[i] != 't' && s[i] != 'T' && s[i] != 'l' && s[i] != 'L')
{
s[i] = s[i];
i++;
switch(s)
{
	case 'a' || 'A':
	s[i] = 4;
	i++;
	case 'e' || 'E':
	s[i] = 3;
	i++;
	case 't' || 'T':
	s[i] = 7;
	i++;
	case 'l' || 'L':
	s[i] = 1;
	i++;
	case 'o' || 
}
}
return (s);
}
