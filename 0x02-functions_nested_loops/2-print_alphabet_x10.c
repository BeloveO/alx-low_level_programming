#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char a;
	while (a <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
