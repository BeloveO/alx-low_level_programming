#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the result of simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: success of operation
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", op(i, j));
	return (0);
}
