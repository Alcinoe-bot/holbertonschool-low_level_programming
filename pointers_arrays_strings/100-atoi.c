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
short boolean;
int i, min, res;
i = min = res = boolean = 0;
min = -1;
while (s[i] != '\0')
{
if (s[i] == '-')
min *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
res *= 10;
res -= (s[i] - '0');
boolean = 1;
}
else if (boolean == 1)
break;
i++;
}
res *= min;
return (res);
}
