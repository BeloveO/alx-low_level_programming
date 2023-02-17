#include <stdio.h>
/**
 * main - Prints all letters except e and q
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
