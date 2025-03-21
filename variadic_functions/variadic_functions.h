#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - struct op
 * @c: char
 * @f: fonction pointeur
 */
typedef struct op
{
	char *c;
	int (*f)(va_list a);
} printer;
#endif
