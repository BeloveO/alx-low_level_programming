#include "main.h"
/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
