#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main
 * @argc: argument
 * @argv: array de args
 * Return: return int
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a;
		int b;
		int (*fonction)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		fonction = get_op_func(argv[2]);

		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}

		printf("%d\n", fonction(a, b));
		return (0);

	}
	printf("Error\n");
	exit(98);
}
