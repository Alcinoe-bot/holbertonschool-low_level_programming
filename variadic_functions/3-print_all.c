#include "variadic_functions.h"
/**
* print_c - prints char
* @a: liste
* return : 0
*/
int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}
/**
 * print_i - prints int
 * @a: liste
 * return : 0
 */
int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}
/**
 * print_f - prints float
 * @a: liste
 * return : 0
 */
int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}
/**
 * print_s - prints strings
 * @a: liste
 * return : 0
 */
int print_s(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}
/**
 * print_all - prints all
 * @format: format
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0
	int  j;
	char *separator = "";
	va_list args;

	printer ops[] = {{'c', print_c}, {'i', print_i},
			{'f', print_f}, {'s', print_s}, {'\0', NULL}};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (ops[j].c)
		{
			if (format[i] == ops[j].c)
			{
			printf("%s", separator);
			ops[j].f(args);
			separateur = ", ";
			break;
			}
		j++;
		}
	i++;
	}

printf("\n");
va_end(args);
}
