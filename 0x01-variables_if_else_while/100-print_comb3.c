#include <stdio.h>
/**
 * main - prints out all possible combinations of double digits where first digit is always smaller than second digit
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			if (y > x)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
