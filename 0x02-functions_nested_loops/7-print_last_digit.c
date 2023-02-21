#include "main.h"
/**
 * print_last_digit - to print the last digit of integers
 *
 * @a: integer to be checked
 *
 * @b: result of input modulo 10
 * Return: the last digit of the input
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		_putchar(-b + '0');
		return (-b);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
}
