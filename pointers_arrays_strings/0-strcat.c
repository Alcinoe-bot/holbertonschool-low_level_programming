#include "main.h"
#include "2-strlen.c"
/**
* _strcat - check the code for
* @dest: pointeur
* @src: pointeur
* Description: concataien
* Return: 0.
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
