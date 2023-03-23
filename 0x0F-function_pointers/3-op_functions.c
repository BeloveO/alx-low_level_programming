#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Sum of two numbers
 * @a: number
 * @b: second number
 * Return: Addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction of two numbers
 * @a: Number
 * @b: Second Number
 * Return: Subtraction of b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication of two numbers
 * @a: number
 * @b: second number
 * Return: Multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of two numbers
 * @a: number
 * @b: second number
 * Return: Division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

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
