#include "main.h"

/**
 * print_square - prints straight line n times.
 * @size: times squares are printed.
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
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
