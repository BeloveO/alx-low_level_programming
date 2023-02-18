#include <stdio.h>
/**
 * main- prints out two double digits in ascending order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			if (b <= a)
			{
				for (c = 0; c < 10; c++)
				{
					for (d = 1; d < 9; d++)
					{
						if (d >= c)
						{
							putchar((a % 10) + '0');
							putchar((b % 10) + '0');
							putchar(' ');
							putchar((c % 10) + '0');
							putchar((d % 10) + '0');
						}
						if (a == 9 && b == 8 && c == 9 && d == 9)
							continue;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

