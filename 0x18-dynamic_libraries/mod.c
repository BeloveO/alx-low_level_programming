#include <stdio.h>
#include <stdlib.h>
/**
 * op_mod - Module of two numbers
 * @a: number
 * @b: second number
 * Return: Modulo a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}