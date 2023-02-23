#include "main.h"
/**
 * print_numbers - prints from 0 - 9
 */
void print_numbers(void)
{
	int a = 0;

	while (a >= 48 && a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
