#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - positif ou negatif
* Descriptione: generer un nombre puis dire s'il est + ou -
* Return:valeur 0
*/
int main(void)
{
int n;
srand(time(NULL));
n = rand()-RAND_MAX / 2;
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
