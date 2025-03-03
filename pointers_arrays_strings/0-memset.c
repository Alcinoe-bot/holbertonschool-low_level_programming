#include "main.h"
/**
* print_array - check the code for
* @s: pointeur
* @b: char
* @n: nombre de nombre
* Description: affiche les valeurs d'un tableau
* Return: Always 0.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
