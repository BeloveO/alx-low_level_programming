#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9 using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	putchar('\n');
	return (0);
}
