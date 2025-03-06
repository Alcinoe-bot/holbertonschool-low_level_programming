#include "main.h"
/**
 * helper - recursion
 * @i: nombre
 * @n: nombre
 * Return: int
 */
int helper(int i, int n)
{
int j;
if (i * i != n)
{
	if (i > n)
	{
		return (-1);
	}
	j = helper(i + 1, n);
	return (j + 1);
}
return (0);
}
/**
 * _sqrt_recursion - racine
 * @n: nombre
 * Return: int
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
return (helper(0, n));
}
