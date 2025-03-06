#include "main.h"
/**
 * fonction - recursion
 * @i: nombre
 * @n: nombre
 * Return: int
 */
int fonction(int i, int n)
{
if (n % i == 0 && n != i)
{
	return (0);
}
if (n % i != 0 && i < n)
{
	return (fonction(i + 1, n));
}
return (1);
}
/**
 * is_prime_number - nombre premier
 * @n: int
 * Return: 0
 */
int is_prime_number(int n)
{
int i = 2;
if (n < 2)
{
	return (0);
}
return (fonction(i, n));
}
