#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - prints a char
 * @a: argument list
 */
int print_c(va_list a)
{
    printf("%c", va_arg(a, int));  /* On utilise 'int' ici car va_arg attend un entier pour un 'char' */
    return (0);
}

/**
 * print_i - prints an integer
 * @a: argument list
 */
int print_i(va_list a)
{
    printf("%d", va_arg(a, int));
    return (0);
}

/**
 * print_f - prints a float
 * @a: argument list
 */
int print_f(va_list a)
{
    printf("%f", va_arg(a, double));
    return (0);
}

/**
 * print_s - prints a string
 * @a: argument list
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
 * print_all - prints anything based on format
 * @format: format string
 */
void print_all(const char * const format, ...)
{
    int i = 0, j;
    char *separator = "";
    va_list args;

    printer ops[] = {
        {'c', print_c},
        {'i', print_i},
        {'f', print_f},
        {'s', print_s},
        {'\0', NULL}
    };

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (ops[j].f)
        {
            if (format[i] == ops[j].c)  /* Comparaison avec le caractère simple */
            {
                printf("%s", separator);
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
