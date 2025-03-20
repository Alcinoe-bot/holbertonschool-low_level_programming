#include "variadic_functions.h"
/**
 * print_numbers - prints les nombres
 * @separator: seperare les char
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argsnum;

	va_start(argsnum, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(argsnum, int));
	}

va_end(argsnum);
printf("\n");
}
