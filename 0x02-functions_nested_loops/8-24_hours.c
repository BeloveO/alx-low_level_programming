#include "main.h"
/**
 * jack_bauer - prints out every minute of a day
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			if (a == 23 && b == 59)
				continue;
			_putchar('\n');
		}
	}
}
