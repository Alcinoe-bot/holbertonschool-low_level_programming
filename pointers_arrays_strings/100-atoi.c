#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - string -> integer
 * @s: string
 *
 * Return: returns 0
 */
int _atoi(char *s)
{
	int i;
	int np = 0;
	int c = 0;
	int d = 1;
	int num = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && c > 0)
			break;
		if (s[i] == '-')
			np++;
		else if (s[i] == '+')
			continue;
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
		}
	}
	while (c > 0)
	{
		if (num > 2147483647 - (s[i - 1] - '0')) / 10)
	{
		if (np % 2 == 0)
			return(2147483647);
		else
			return(-2147483647);
	}
		num += ((s[i - 1] - '0') * d);
		i--;
		c--;
		d *= 10;
	}
	if (np % 2 != 0)
	{
		num *= -1;
	}
	return (num);
}
