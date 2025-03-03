#include "main.h"
/**
 * _memcpy - meme
 * @dest: pointeur
 * @src: pointeur
 * @n: nombre
 * Return: return the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
