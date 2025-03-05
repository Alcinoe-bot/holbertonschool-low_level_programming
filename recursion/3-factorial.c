#include "main.h"
/**
 * factorial - factoriel
 * @n: nombre
 * Return: returns int
 */
int factorial(int n)
{
if (n < 1)
{
	return (-1);
}

if (n > 1)
{
	return (n * factorial(n - 1));
}
return (1);
}
