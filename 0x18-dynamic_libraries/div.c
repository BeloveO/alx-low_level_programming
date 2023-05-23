#include <stdio.h>
#include <stdlib.h>

/**
 * op_div - Division of two numbers
 * @a: number
 * @b: second number
 * Return: Division of a by b
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


