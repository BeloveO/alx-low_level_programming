#include "main.h"
/**
 * times_table - get the 9 times table
 *
 * Return: always 0 (success)
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int result = a * b;
			_putchar(result + '0');
		}
		_putchar('\n');
	}
	return (0);
}
