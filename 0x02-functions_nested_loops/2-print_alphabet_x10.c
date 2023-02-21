#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char a;
	int c = 0;

	while (c < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
	c++;
}
