#include "main.h"
#include "2-strlen.c"
/**
* string_toupper - check the code for
* char *: pointeur
* Description: uppercase
* Return: 0.
*/
char *string_toupper(char *)
{
int i;
for (i = 0; s[i] != '0'; i++)
{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = i - 32;
	}
}
}
