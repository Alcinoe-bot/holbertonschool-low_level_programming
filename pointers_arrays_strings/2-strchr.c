#include "main.h"
/**
 * _strchr - check the code
 * @s: pointeur
 * @c: char
 * Return: return
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
if (s[i] == c)
{
return (s + i);
}
return (0);
}
