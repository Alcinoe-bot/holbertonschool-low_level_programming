#include "variadic_functions.h"
/**
 * print_c - print char
 * @a: liste
 */
int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}

/**
 * print_i - print int
 * @a: liste
 */
int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}

/**
 * print_f - print float
 * @a: liste
 */
int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}

/**
 * print_s - print strings
 * @a: liste
 */
int print_s(va_list a)
{
	char *s = va_arg(a, char *);

	if (s == NULL)
	s = "(nil)";
	printf("%s", s);
	return (0);
}

/**
 * print_all - print tout
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	char *separateur = "";
	va_list args;

	printer ops[] = {
	{'c', print_c},
	{'i', print_i},
	{'f', print_f},
	{'s', print_s},
	{'\0', NULL}};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (ops[j].f)
			{
				if (format[i] == ops[j].c)
					{
						printf("%s", separateur);
						ops[j].f(args);
						separator = ", ";
						break;
					}
				j++;
			}
		i++;
	}

printf("\n");
va_end(args);
}
