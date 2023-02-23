#include "main.h"

/**
 * print_diagonal - prints straight line n times.
 * @n: times diagonal line is printed.
 */
void print_square(int size);
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
