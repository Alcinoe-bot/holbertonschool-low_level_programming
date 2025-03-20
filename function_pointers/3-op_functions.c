#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - somme
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - soustrait
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplie
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo
 * @a: int a
 * @b: int b
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
