#include "main.h"
/**
 * _puts_recursion - print string
 * @s: pointeur
 * Return: returns string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
return;
}
