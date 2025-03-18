#include "function_pointers.h"
/**
 * print_name - print un nom
 * @name: nom
 * @f: fonction
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}
