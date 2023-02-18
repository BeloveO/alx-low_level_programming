#include <stdio.h>
/**
 * main - prints three digits numbers in ascending order and number
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			for (z =2; z < 10; z++)
			{
				if (z > y && y > x)
				{
					putchar((x % 10) + '0');
					putchar((y % 10) + '0');
					putchar((z % 10) + '0');
				}
				if (x == 7 && y == 8 && z == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
