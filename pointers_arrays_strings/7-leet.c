#include "main.h"
#include "2-strlen.c"
/**
* leet - check the code for
* @s: pointeur
* Description: a
* Return: 0.
*/
char *leet(char *s)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphaArr[j] != '\0'; j++)
		{
			if (s[i] == alphaArr[j])
			{
				s[i] = alphaArr[j + 1];
				break;
			}
		}
	}
	return (s);
}
