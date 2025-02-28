#include "main.h"
#include "2-strlen.c"
/**
* _strncat - check the code for
* @dest: pointeur
* @src: pointeur
* @n: nombre
* Description: concataien
* Return: 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
