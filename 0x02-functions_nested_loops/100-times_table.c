#include "main.h"
/**
 *
 */
void print_times_table(int n)
{
	int a, b, result;

	if (n < 15 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				result = a * b;

				if (result > 9)
					_putchar(' ');
				else
					_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
