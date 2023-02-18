#include <stdio.h>
/**
 * main - Prints all base 16 numbers in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (x = 0; x < 5; x++)
		putchar('a' + x);
	putchar('\n');
	return (0);
}
