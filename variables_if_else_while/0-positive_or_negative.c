#include <stdio.h>
/**
* main - positif ou negatif
* Descriptione: generer un nombre puis dire s'il est + ou -
* Return:valeur 0
*/
int main(void)
{
int n;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
