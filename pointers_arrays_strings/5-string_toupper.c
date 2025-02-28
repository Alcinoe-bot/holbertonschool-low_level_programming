#include "main.h"

/**
* string_toupper - check the code for
* @s: pointeur
* Description: uppercase
* Return: 0.
*/

char *string_toupper(char *s)
{
int i = 0;
if (s == 0)
	{
	return (0);
	}
while (s[i] != '0')
{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
		i++;
	}
	else
	{
		s[i] = s[i];
		i++;
	}
}
return (s);
}
